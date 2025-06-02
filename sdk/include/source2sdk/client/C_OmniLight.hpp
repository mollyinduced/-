#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BarnLight.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1080
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float m_flInnerAngle"
        // static metadata: MNetworkVarNames "float m_flOuterAngle"
        // static metadata: MNetworkVarNames "bool m_bShowLight"
        #pragma pack(push, 1)
        class C_OmniLight : public source2sdk::client::C_BarnLight
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flInnerAngle; // 0x1070            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flOuterAngle; // 0x1074            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bShowLight; // 0x1078            
            uint8_t _pad1079[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OmniLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_OmniLight) == 0x1080);
    };
};
