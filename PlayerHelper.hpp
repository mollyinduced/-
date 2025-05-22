#pragma once
#include <windows.h>
#include <cstdint>
#include "source2sdk/client/CCSPlayerController.hpp"
#include "source2sdk/client/C_CSPlayerPawn.hpp"
#include "qangle.h"
#include "output/offsets.hpp"
#include <cassert>
//帮助类
class CS2Helper {
    uint64_t clientBase;
    uint64_t entityListPtr;
    uint64_t entityList;
    uint64_t entry;


public:
    CS2Helper() {
         clientBase = (uint64_t)GetModuleHandle("client.dll");
         //entityListPtr = (clientBase + cs2_dumper::offsets::client_dll::dwEntityList);
        auto codeAddr = (uint64_t)Scanner::PatternScan("client.dll" , "48 89 35 ? ? ? ? 48 85 F6");
        char code[7]{};
        memcpy(code , (void *)codeAddr , 7);
        auto disp32 = *(int32_t *)(code + 3);
        entityListPtr = codeAddr + 7 + disp32;

        entityList = *((uint64_t*)entityListPtr);
        entry = *(uint64_t*)(entityList + 0x10);
    }

    static CS2Helper & Instance() {
        static CS2Helper ins;
        return ins;
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
        auto current = *(source2sdk::client::C_CSPlayerPawn**)((entry_2 + 0x78 * (playerPawnHandle & 0x1ff)));
        return current;
    }

    source2sdk::client::C_CSPlayerPawn * getLocalPlayerPawn() const {
        return *(source2sdk::client::C_CSPlayerPawn **)(clientBase + cs2_dumper::offsets::client_dll::dwLocalPlayerPawn);
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
        // Credit: https://www.unknowncheats.me/forum/4258133-post6228.html
        static auto vtable = *(void***)local;
        static auto targetFunc = vtable[169];
        assert(targetFunc);

        using FN = void(__fastcall *)(source2sdk::client::C_CSPlayerPawn *  , Vector_t *);
        ((FN)targetFunc)(local , &vecEyePosition);
        return vecEyePosition;
    }
};