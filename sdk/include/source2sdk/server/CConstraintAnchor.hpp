#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0x9b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CConstraintAnchor : public source2sdk::server::CBaseAnimGraph
        {
        public:
            float m_massScale; // 0x9a8            
            uint8_t _pad09ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CConstraintAnchor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CConstraintAnchor) == 0x9b0);
    };
};
