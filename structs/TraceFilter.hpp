#pragma once

#include <array>
#include "source2sdk/client/C_CSPlayerPawn.hpp"
#include "source2sdk/entity2/CEntityIdentity.hpp"

class TraceFilter_t
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

    TraceFilter_t(std::uint64_t uMask,
        source2sdk::client::C_CSPlayerPawn * pSkip1,
        source2sdk::client::C_CSPlayerPawn * pSkip2,
        int nLayer) {

        m_uTraceMask = uMask;
        m_v1[0] = m_v1[1] = 0;
        m_v2 = 7;
        m_v3 = nLayer;
        m_v4 = 0x49;
        m_v5 = 0;

        if (pSkip1 != nullptr) {

            auto index = *(uint32_t *)((uint64_t )pSkip1->m_pEntity + 0x10);
            auto entryIndex = index & 0x7fff;
            auto serialNumber = index >> 15;
            auto serial = serialNumber - (pSkip1->m_pEntity->m_flags & 1);

            auto index_ = entryIndex | (serial << 15);
            auto entryIndex_ = index_ & 0x7fff;

            uint32_t ownerHandleIndex = -1;
            auto coll = pSkip1->m_pCollision;
            if ( coll && !(coll->m_usSolidFlags & 4) ) {
                ownerHandleIndex = (uint32_t)pSkip1->m_hOwnerEntity & 0x7fff;
            }

            std::uint16_t mask = 0;
            if (coll) {
                mask = *(uint16_t * )(uint64_t)pSkip1->m_pCollision + 0x38;
            }

            m_arrSkipHandles[0] = entryIndex_;
            m_arrSkipHandles[2] = ownerHandleIndex;
            m_arrCollisions[0] = mask;
        }
    }
};