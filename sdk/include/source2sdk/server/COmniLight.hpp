#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBarnLight.hpp"

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
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float m_flInnerAngle"
        // static metadata: MNetworkVarNames "float m_flOuterAngle"
        // static metadata: MNetworkVarNames "bool m_bShowLight"
        #pragma pack(push, 1)
        class COmniLight : public source2sdk::server::CBarnLight
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flInnerAngle; // 0xab0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flOuterAngle; // 0xab4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bShowLight; // 0xab8            
            uint8_t _pad0ab9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COmniLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::COmniLight) == 0xac0);
    };
};
