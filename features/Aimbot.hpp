#pragma once
#include "source2sdk/client/CGameSceneNode.hpp"
#include "datatypes/qangle.h"
#include "datatypes/matrix.h"
#include "structs/CCSGOInput.hpp"
#include "structs/CUserCmd.hpp"
#include "PlayerHelper.hpp"
#include "hooks/SilentAimHook.hpp"
#include "core/CS2.hpp"
#include <optional>
class AimBot {
public:

    /**
     * 计算角度差
     * @param playerPtr 目标玩家指针
     * @param boneIndex 骨骼ID
     * @param localPlayer 本地玩家指针
     * @param input input
     * @return 角度差值
     */
    static QAngle_t GetAngularDifference(source2sdk::client::C_CSPlayerPawn* playerPtr ,
        BONE_INDEX boneIndex,
        source2sdk::client::C_CSPlayerPawn* localPlayer ,
        CCSGOInput * input) {
        // The current position
        auto vecTarget = CS2Helper::GetBonePos(playerPtr , boneIndex);
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

    /**
     * 获取可见的最近的敌人骨骼位置的角度差值
     * @param playerPtr
     * @param targetBoneIndex
     * @param localPlayer
     * @param input
     * @return
     */
    static std::optional<QAngle_t> GetBestAngularDifference(source2sdk::client::C_CSPlayerPawn* playerPtr ,
                                             BONE_INDEX &targetBoneIndex,
                                             source2sdk::client::C_CSPlayerPawn* localPlayer ,
                                             CCSGOInput * input) {

        const static BONE_INDEX chestBones[] = {
            BONE_INDEX::head_0,
            //BONE_INDEX::spine_0,  // 脊柱0（胸部起始）
            //BONE_INDEX::spine_1,  // 脊柱1（胸部中间）
            //BONE_INDEX::spine_2,  // 脊柱2（胸部上部）
            //BONE_INDEX::spine_3,  // 脊柱3（接近颈部）
        };

        std::optional<QAngle_t> ret;
        float len = 1000;
        for (const auto & index : chestBones) {
            // check visi
            if (!CS2Helper::IsVisi(playerPtr , index , localPlayer)) {
                continue;
            }

            auto tmp = GetAngularDifference(playerPtr , index , localPlayer , input);
            auto tmpLen = tmp.Length2D();
            if (tmpLen < len) {
                targetBoneIndex = index;
                ret = tmp;
                len = tmpLen;
            }
        }

        return ret;

    }


    static void findTarget(CCSGOInput * input , unsigned int a , CUserCmd * cmd) {
        static constexpr int FOV = 10;
        auto h = CS2::cs2_helper;
        const int gameMode = h->GetGameMode();
        if (!h->CheckInGame())
            return;
        auto localPtr = h->getLocalPlayerPawn();
        if (!localPtr)
            return;

        auto localController = h->getLocalPlayerController();
        if (!localController)
            return;

        if (!localController->m_bPawnIsAlive)
            return;

        float targetLen {1000};
        QAngle_t finalDiffAngle{};
        bool findOut{false};
        // find target loop
        for (int i = 0; i < 64 ;i ++) {

            auto targetPtr = h->getPlayer(i);
            if (!targetPtr)
                continue;

            //not local
            if (targetPtr == localPtr)
                continue;

            //不是死斗模式进行队友判断
            if (gameMode != 2) {
                //same team
                if (targetPtr->m_iTeamNum == localPtr->m_iTeamNum)
                  continue;
            }

            // life
            if (targetPtr->m_lifeState)
                continue;

            BONE_INDEX bestBoneIndex;
            auto diffAngle = GetBestAngularDifference(targetPtr , bestBoneIndex , localPtr , input);
            if (!diffAngle)
                continue;

            //将看见的敌人发光
            CS2Helper::Glow(targetPtr , 3);

            if (diffAngle->Length2D() < targetLen && diffAngle->Length2D() <= FOV) {
                findOut = true;
                targetLen = diffAngle->Length2D();
                finalDiffAngle = *diffAngle;
            }

        }

        QAngle_t aimPunchAngle;
        memcpy(&aimPunchAngle , localPtr->m_aimPunchAngle , sizeof(QAngle_t));
        auto set = findOut ? std::make_shared<QAngle_t>(input->GetViewAngles() + finalDiffAngle - aimPunchAngle * 2) : nullptr;
        SilentAimHook::setTargetAngle(set);


    }




};