#include <windows.h>
#include <MinHook.h>
#include <cstdint>
#include "pattern_scan.hpp"
#include "features/Aimbot.hpp"
#include "PlayerHelper.hpp"


void* GOrigin = nullptr;
int64_t MyHookFunc(int* a1, int64_t a2, char a3, int64_t arg1 , int64_t arg2 , int64_t arg3) {

    if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
        auto h = CS2Helper::Instance();
        auto localPtr = h.getLocalPlayerPawn();
        auto myTid = CS2Helper::getTeamNum(localPtr);
        auto myAngle = h.getViewAngle<QAngle_t>();
        uint64_t closedTarget {INFINITE};
        QAngle_t targetAngle;
        bool findOut{false};
        // find target loop
        for (int i = 0; i < 32 ;i ++) {
           auto targetPtr = h.getPlayer(i);
            if (!targetPtr)
                continue;

            //not local
            if (targetPtr == localPtr)
                continue;

            // same team
            auto targetTid = CS2Helper::getTeamNum(targetPtr);
            if (targetTid == myTid)
                continue;

            // life
            if (CS2Helper::getLifeState(targetPtr))
                continue;

            auto getAngle = AimBot::GetTargetAngle(targetPtr , localPtr);

            auto diff = (getAngle - myAngle).Length2D();
            if (diff < closedTarget) {
                findOut = true;
                closedTarget = diff;
                targetAngle = getAngle;
            }

        }

        if (findOut) {
            //silent aim  is psilent ?
            memcpy(&a1[4] , &targetAngle.x , sizeof(float)); //set Pitch
            memcpy(&a1[5] , &targetAngle.y , sizeof(float)); //set Yaw
            //normal aim
            //h.writeViewAngle<QAngle_t>(targetAngle);
        }

    }



    using FN_V = int64_t (*)(int* a1, int64_t a2, char a3, int64_t arg1 , int64_t arg2 , int64_t arg3);
    return ((FN_V)GOrigin)(a1, a2, a3, arg1 ,arg2 , arg3);
}

void* GModule;
auto hookTarget = Scanner::PatternScan("client.dll" , "4C 89 4C 24 20 55 53 57 41 56 48 8D 6C 24 D1");
BOOL __stdcall DllMain(HINSTANCE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {

    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        GModule = hModule;
        MH_Initialize();
        MH_CreateHook(hookTarget , MyHookFunc , &GOrigin);
        MH_EnableHook(hookTarget);
    } else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
        MH_DisableHook(hookTarget);
        MH_Uninitialize();
    }

    return TRUE;
}
