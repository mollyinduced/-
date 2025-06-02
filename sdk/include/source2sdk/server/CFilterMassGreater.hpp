#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x540
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFilterMassGreater : public source2sdk::server::CBaseFilter
        {
        public:
            float m_fFilterMass; // 0x538            
            uint8_t _pad053c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterMassGreater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterMassGreater) == 0x540);
    };
};
