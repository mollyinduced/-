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


            //https://www.unknowncheats.me/forum/counter-strike-2-a/577666-tracing.html
            auto GetEntityHandleRebuilt = [](uintptr_t a1) //aka CCSPlayerPawn* a1
            {
                uintptr_t v1; // rax
                unsigned int v2; // r8d
                int v3; // edx
                int v4; // eax

                if ( !a1 )
                    return 0xFFFFFFFF;
                v1 = *(uint64_t *)(a1 + 16);
                if ( !v1 )
                    return 0xFFFFFFFF;
                v2 = *(uint32_t *)(v1 + 16);
                v3 = 0x7FFF;
                v4 = ((v2 >> 15) - (*(uint32_t*)(v1 + 48) & 1)) << 15;
                if ( v2 != -1 )
                    v3 = v2 & 0x7FFF;
                return v3 | (unsigned int)v4;
            };

            uint32_t ownerHandleIndex = -1;
            auto coll = pSkip1->m_pCollision;
            if ( coll && !(coll->m_usSolidFlags & 4) ) {
                uint32_t ownerEntity;
                memcpy(&ownerEntity , pSkip1->m_hOwnerEntity , 4);
                ownerHandleIndex = ownerEntity & 0x7fff;
            }

            std::uint16_t mask = 0;
            if (coll) {
                mask = *(uint16_t * )((uint64_t)pSkip1->m_pCollision + 0x38);
            }

            m_arrSkipHandles[0] = GetEntityHandleRebuilt((uint64_t)pSkip1);
            m_arrSkipHandles[2] = ownerHandleIndex;
            m_arrCollisions[0] = mask;
        }
    }
};