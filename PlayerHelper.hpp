#pragma once
#include <windows.h>
#include <cstdint>
#include "source2sdk/client/CCSPlayerController.hpp"
#include "source2sdk/client/C_CSPlayerPawn.hpp"
#include "output/offsets.hpp"
#include <cassert>
#include "structs/GameTrace.hpp"
#include "structs/TraceFilter.hpp"
#include "structs/CGameTraceManager.hpp"
#include <iostream>
#include "matrix.h"
#include "structs/GameTypes.hpp"
//帮助类
class CS2Helper {
    uint64_t clientBase;
    uint64_t engineBase;
    uint64_t matchmakingBase;
    uint64_t entityListPtr;
    uint64_t entityList;
    uint64_t entry;
public:
    CS2Helper() {
        clientBase = (uint64_t)GetModuleHandle("client.dll");
        engineBase = (uint64_t)GetModuleHandle("engine2.dll");
        matchmakingBase = (uint64_t)GetModuleHandle("matchmaking.dll");
        //entityListPtr = (clientBase + cs2_dumper::offsets::client_dll::dwEntityList);
        auto codeAddr = (uint64_t)Scanner::PatternScan("client.dll" , "48 89 35 ? ? ? ? 48 85 F6");
        char code[7]{};
        memcpy(code , (void *)codeAddr , 7);
        auto disp32 = *(int32_t *)(code + 3);
        entityListPtr = codeAddr + 7 + disp32;

        entityList = *((uint64_t*)entityListPtr);
        entry = *(uint64_t*)(entityList + 0x10);
    }


    source2sdk::client::C_CSPlayerPawn * getPlayer(int i) const {
        auto controller = *(source2sdk::client::CCSPlayerController**)(entry + i * 0x78);
        if (!controller) {
            return nullptr;
        }
        int32_t playerPawnHandle{};
        memcpy(&playerPawnHandle , controller->m_hPlayerPawn , 4);
        if (!playerPawnHandle) {
            return nullptr;
        }
        auto entry_2 = *(uint64_t*)(entityList + 0x8 * ((playerPawnHandle & 0x7fff) >> 9) + 0x10);
        if (!entry_2)
            return nullptr;
        return *(source2sdk::client::C_CSPlayerPawn**)(entry_2 + 0x78 * (playerPawnHandle & 0x1ff));
    }

    source2sdk::client::C_CSPlayerPawn * getLocalPlayerPawn() const {
        return *(source2sdk::client::C_CSPlayerPawn **)(clientBase + cs2_dumper::offsets::client_dll::dwLocalPlayerPawn);
    }

    source2sdk::client::CCSPlayerController* getLocalPlayerController() const {
        return *(source2sdk::client::CCSPlayerController**)(clientBase + cs2_dumper::offsets::client_dll::dwLocalPlayerController);
    }

    static Vector_t GetBonePos(source2sdk::client::C_CSPlayerPawn* player , int boneIndex) {
        //https://www.unknowncheats.me/forum/counter-strike-2-a/661000-exact-head-position.html
        auto targetMatxArr = *(Matrix2x4_t**)((uint64_t )player->m_pGameSceneNode + 0x1F0); // offset from
        return targetMatxArr->GetOrigin(boneIndex);
    }

    static bool IsVisi(source2sdk::client::C_CSPlayerPawn* playerPtr , source2sdk::client::C_CSPlayerPawn* localPlayer ) {
        auto end = GetBonePos(playerPtr , 6);
        auto begin = GetEyePos(localPlayer);

        class UnkClass {
            char pad[128]{};
        };
        UnkClass arg1{};

        //0x1C300B autowall ?
        TraceFilter_t filter(0x1C1003 , localPlayer , nullptr , 4);


        GameTrace_t ret{};
        CGameTraceManager::Obj()->TraceShape<UnkClass , Vector_t , TraceFilter_t , GameTrace_t>( arg1 , begin , end , filter , ret);
        return ret.fraction > 0.65f && ret.hitEntity == playerPtr;

    }

    static void Glow(source2sdk::client::C_CSPlayerPawn* playerPtr , int glowType) {
        //https://www.unknowncheats.me/forum/counter-strike-2-a/605516-internal-esp-glow-cheat.html
        playerPtr->m_Glow.m_iGlowType = glowType;
        playerPtr->m_Glow.m_bGlowing = true;
        *(uint32_t *)playerPtr->m_Glow.m_glowColorOverride = 0x800000FF;
    }

    static Vector_t GetEyePos(source2sdk::client::C_CSPlayerPawn * local) {
        Vector_t vecEyePosition{};
        static void *GetEyePosFunc = nullptr;
        if (!GetEyePosFunc)
            GetEyePosFunc = Scanner::PatternScan("client.dll" , "48 89 5C 24 10 56 48 83 EC ? 48 8B D9 48 8B F2 48 8B 89 E0 11 00 00");
        using FN = int64_t(__fastcall *)(source2sdk::client::C_CSPlayerPawn *  , Vector_t *);
        ((FN)GetEyePosFunc)(local , &vecEyePosition);
        return vecEyePosition;
    }

    bool CheckInGame() const {
        auto networkClient = *(uint64_t *) (engineBase + cs2_dumper::offsets::engine2_dll::dwNetworkGameClient);
        auto state = *(int*)(networkClient + cs2_dumper::offsets::engine2_dll::dwNetworkGameClient_signOnState);
        return state == 6;
    }



    int GetGameMode () const {
        auto gameTypePtr = (uint64_t **)(matchmakingBase + cs2_dumper::offsets::matchmaking_dll::dwGameTypes);
        auto getModeFunc = (*gameTypePtr)[20];
        //auto getTypeFunc = (*gameTypePtr)[19];
        using FN_GetMode = int64_t (__fastcall*)(void *);
        //using FN_GetType = int32_t (__fastcall*)(void *);
        return ((FN_GetMode)getModeFunc)(gameTypePtr);
    }

    int GetGameType() const {
        auto gameTypePtr = (uint64_t **)(matchmakingBase + cs2_dumper::offsets::matchmaking_dll::dwGameTypes);
        auto getTypeFunc = (*gameTypePtr)[19];
        using FN_GetType = int32_t (__fastcall*)(void *);
        return ((FN_GetType)getTypeFunc)(gameTypePtr);
    }
};