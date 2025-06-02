#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundAreaEntityBase.hpp"

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
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float m_flRadius"
        #pragma pack(push, 1)
        class C_SoundAreaEntitySphere : public source2sdk::client::C_SoundAreaEntityBase
        {
        public:
            // metadata: MNetworkEnable
            float m_flRadius; // 0x590            
            uint8_t _pad0594[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntitySphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntitySphere) == 0x598);
    };
};
