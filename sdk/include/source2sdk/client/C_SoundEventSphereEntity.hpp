#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundEventEntity.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float m_flRadius"
        #pragma pack(push, 1)
        class C_SoundEventSphereEntity : public source2sdk::client::C_SoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flRadius; // 0x628            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventSphereEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventSphereEntity) == 0x630);
    };
};
