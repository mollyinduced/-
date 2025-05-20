#pragma once
#include "PlayerHelper.hpp"
#include "CGameTraceManager.hpp"
#include "qangle.h"
#include "TraceFilter.hpp"
class AimBot {

public:
    static  QAngle_t GetTargetAngle(uint64_t playerPtr , uint64_t localPlayer ) {
        auto targetEye = CS2Helper::getOldOrigin<Vector_t>(playerPtr) + CS2Helper::getViewOffset<Vector_t>(playerPtr);
        auto localEye = CS2Helper::getOldOrigin<Vector_t>(localPlayer) + CS2Helper::getViewOffset<Vector_t>(localPlayer);

        auto angle = Vector_t::CalculateViewAngle(localEye , targetEye);
        angle.Normalize();
        auto punch = CS2Helper::getAimPunchAngle<QAngle_t>(localPlayer);
        return angle - (punch * 2);
    }

    static bool IsVisi(uint64_t playerPtr , uint64_t localPlayer) {
        auto end = CS2Helper::getOldOrigin<Vector_t>(playerPtr) + CS2Helper::getViewOffset<Vector_t>(playerPtr);
        auto begin = CS2Helper::getOldOrigin<Vector_t>(localPlayer) + CS2Helper::getViewOffset<Vector_t>(localPlayer);

        class UnkClass {
            char pad[128]{};
        };
        UnkClass arg1{};


        TraceFilter_t filter(0x1C1003 , (source2sdk::client::C_CSPlayerPawn *)localPlayer , nullptr , 4);

        class Result {
        public:
           void * unk{};
           void * hitEntity{};
           char pad[104]{};    //unk
           Vector_t start{};
           Vector_t end{};
            char pad2[28]{};
           float fraction; //offset 172;
           char pad3[0x100]{};  //unk
        };
        Result ret{};
        CGameTraceManager::Obj()->TraceShape<UnkClass , Vector_t , TraceFilter_t , Result>( arg1 , begin , end , filter , ret);
        return ret.fraction > 0.97f && (uint64_t)ret.hitEntity == playerPtr;

    }
};