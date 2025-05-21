#pragma once
#include "source2sdk/client/CGameSceneNode.hpp"
#include "datatypes/qangle.h"
#include "datatypes/matrix.h"
#include "structs/CGameTraceManager.hpp"
#include "structs/GameTrace.hpp"
#include "structs/TraceFilter.hpp"
#include "structs/CCSGOInput.hpp"
#include "structs/CUserCmd.hpp"
#include "PlayerHelper.hpp"
#include "hooks/SilentAimHook.hpp"
class AimBot {

    static Vector_t getEye(source2sdk::client::C_CSPlayerPawn* player) {
        //https://www.unknowncheats.me/forum/counter-strike-2-a/661000-exact-head-position.html
        auto targetMatxArr = *(Matrix2x4_t**)((uint64_t )player->m_pGameSceneNode + 0x1F0); // offset from
        return targetMatxArr->GetOrigin(6);
    }
public:
    static  QAngle_t GetTargetAngle(source2sdk::client::C_CSPlayerPawn* playerPtr , source2sdk::client::C_CSPlayerPawn* localPlayer ) {

        auto targetEye = getEye(playerPtr);
        auto localEye = getEye(localPlayer);

        auto angle = Vector_t::CalculateViewAngle(localEye , targetEye);
        angle.Normalize();
        QAngle_t punch;
        memcpy(&punch , localPlayer->m_aimPunchAngle , sizeof(QAngle_t));
        return angle - (punch * 2);
    }

    static bool IsVisi(source2sdk::client::C_CSPlayerPawn* playerPtr , source2sdk::client::C_CSPlayerPawn* localPlayer ) {
        auto end = getEye(playerPtr);
        auto begin = getEye(localPlayer);

        class UnkClass {
            char pad[128]{};
        };
        UnkClass arg1{};

        //0x1C300B autowall ?
        TraceFilter_t filter(0x1C1003 , (source2sdk::client::C_CSPlayerPawn *)localPlayer , nullptr , 4);


        GameTrace_t ret{};
        CGameTraceManager::Obj()->TraceShape<UnkClass , Vector_t , TraceFilter_t , GameTrace_t>( arg1 , begin , end , filter , ret);
        return ret.fraction > 0.97f && ret.hitEntity == playerPtr;

    }

    static void findTarget(CCSGOInput * input , unsigned int a , CUserCmd * cmd) {
        auto h = CS2Helper::Instance();
        auto localPtr = h.getLocalPlayerPawn();
        uint64_t closedTarget {INFINITE};
        QAngle_t targetAngle;
        QAngle_t myAngle = input->GetViewAngles();
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
            if (targetPtr->m_iTeamNum == localPtr->m_iTeamNum)
                continue;

            // life
            if (targetPtr->m_lifeState)
                continue;

            // check visi
            if (!AimBot::IsVisi(targetPtr , localPtr)) {
                continue;
            }

            auto getAngle = AimBot::GetTargetAngle(targetPtr , localPtr);

            auto diff = (getAngle - myAngle).Length2D();
            if (diff < closedTarget) {
                findOut = true;
                closedTarget = diff;
                targetAngle = getAngle;
            }

        }

        if (findOut) {
            SilentAimHook::setTargetAngle(targetAngle);
            cmd->nButtons.nValue |= 0x1;
            cmd->nButtons.nValueChanged |= 0x1;
        }


    }




};