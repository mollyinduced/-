#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/navproperties_t.hpp"

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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CLogicNavigation : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04e0[0x8]; // 0x4e0
            bool m_isOn; // 0x4e8            
            uint8_t _pad04e9[0x3]; // 0x4e9
            source2sdk::server::navproperties_t m_navProperty; // 0x4ec            
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // CUtlString navprop; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNavigation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNavigation) == 0x4f0);
    };
};
