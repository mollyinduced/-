#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBuoyancyHelper.hpp"
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xdb8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float m_flFluidDensity"
        #pragma pack(push, 1)
        class C_TriggerBuoyancy : public source2sdk::client::C_BaseTrigger
        {
        public:
            source2sdk::client::CBuoyancyHelper m_BuoyancyHelper; // 0xd30            
            // metadata: MNetworkEnable
            float m_flFluidDensity; // 0xdb0            
            uint8_t _pad0db4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerBuoyancy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerBuoyancy) == 0xdb8);
    };
};
