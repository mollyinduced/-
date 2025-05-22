#pragma once
#include "source2sdk/client/CGameSceneNode.hpp"
#include "datatypes/qangle.h"
#include "datatypes/matrix.h"
#include "structs/CCSGOInput.hpp"
#include "structs/CUserCmd.hpp"
#include "PlayerHelper.hpp"
#include "hooks/SilentAimHook.hpp"
class AimBot {
public:
    static  QAngle_t GetTargetAngle(source2sdk::client::C_CSPlayerPawn* playerPtr , source2sdk::client::C_CSPlayerPawn* localPlayer ) {

        auto targetEye = CS2Helper::GetBonePos(playerPtr , 6);
        auto localEye = CS2Helper::GetEyePos(localPlayer);

        auto angle = Vector_t::CalculateViewAngle(localEye , targetEye);
        angle.Normalize();
        QAngle_t punch;
        memcpy(&punch , localPlayer->m_aimPunchAngle , sizeof(QAngle_t));
        return angle - (punch * 2);
    }

    static QAngle_t GetAngularDifference(source2sdk::client::C_CSPlayerPawn* playerPtr , source2sdk::client::C_CSPlayerPawn* localPlayer ,CCSGOInput * input) {
        // The current position
        auto vecTarget = CS2Helper::GetBonePos(playerPtr , 6);
        auto vecCurrent = CS2Helper::GetEyePos(localPlayer);


        // The new angle
        QAngle_t vNewAngle = (vecTarget - vecCurrent).ToAngles();
        vNewAngle.Normalize(); // Normalise it so we don't jitter about

        // Store our current angles
        auto vCurAngle = input->GetViewAngles();

        // Find the difference between the two angles (later useful when adding smoothing)
        vNewAngle -= vCurAngle;

        return vNewAngle;
    }


    static void findTarget(CCSGOInput * input , unsigned int a , CUserCmd * cmd) {
        auto h = CS2Helper::Instance();
        auto localPtr = h.getLocalPlayerPawn();

        uint64_t targetLen {INFINITE};
        QAngle_t finalDiffAngle{};
        bool findOut{false};
        // find target loop
        for (int i = 0; i < 64 ;i ++) {
            auto targetPtr = h.getPlayer(i);
            if (!targetPtr)
                continue;

            //not local
            if (targetPtr == localPtr)
                continue;

            // same team
            //if (targetPtr->m_iTeamNum == localPtr->m_iTeamNum)
            //  continue;

            // life
            if (targetPtr->m_lifeState)
                continue;

            // check visi
            if (!CS2Helper::IsVisi(targetPtr , localPtr)) {
                continue;
            }
            auto diffAngle = GetAngularDifference(targetPtr , localPtr , input);
            if (diffAngle.Length2D() < targetLen && diffAngle.Length2D() < 10) {
                findOut = true;
                targetLen = diffAngle.Length2D();
                finalDiffAngle = diffAngle;
                CS2Helper::Glow(targetPtr , 3);
            }

        }


        QAngle_t aimPunchAngle;
        memcpy(&aimPunchAngle , localPtr->m_aimPunchAngle , sizeof(QAngle_t));
        auto set = findOut ? std::make_shared<QAngle_t>(input->GetViewAngles() + finalDiffAngle - aimPunchAngle * 2) : nullptr;
        SilentAimHook::setTargetAngle(set);


    }




};