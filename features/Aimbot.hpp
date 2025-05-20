#pragma once
#include "PlayerHelper.hpp"
#include "CGameTraceManager.hpp"
#include "qangle.h"
#include <cassert>
#include <array>
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

        struct TraceFilter_t
        {
        public:
            void *vTable;
            std::int64_t m_uTraceMask;
            std::array<std::int64_t, 2> m_v1;
            std::array<std::int32_t, 4> m_arrSkipHandles;
            std::array<std::int16_t, 2> m_arrCollisions;
            std::int16_t m_v2;
            std::uint8_t m_v3;
            std::uint8_t m_v4;
            std::uint8_t m_v5;

            TraceFilter_t() = default;
            TraceFilter_t(std::uint64_t uMask, void * pSkip1, void * pSkip2, int nLayer) {
                m_uTraceMask = uMask;
                m_v1[0] = m_v1[1] = 0;
                m_v2 = 7;
                m_v3 = nLayer;
                m_v4 = 0x49;
                m_v5 = 0;
            }
        };
        TraceFilter_t filter(0x1C1003 , nullptr , nullptr , 4);

        class Result {
        public:
           char pad[120]{};    //unk
           Vector_t start{};
           Vector_t end{};
            char pad2[28]{};
           float fraction; //offset 172;
           char pad3[0x100]{};  //unk
        };
        Result ret{};
        CGameTraceManager::Obj()->TraceShape<UnkClass , Vector_t , TraceFilter_t , Result>( arg1 , begin , end , filter , ret);
        assert(ret.fraction <= 1.f);
        return ret.fraction > 0.97f;

    }
};