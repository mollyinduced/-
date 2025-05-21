#pragma once
#include <windows.h>
#include <cstdint>
#include "source2sdk/client/CCSPlayerController.hpp"
#include "source2sdk/client/C_CSPlayerPawn.hpp"
#include "qangle.h"
#include "output/client_dll.hpp"
#include "output/offsets.hpp"
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
};