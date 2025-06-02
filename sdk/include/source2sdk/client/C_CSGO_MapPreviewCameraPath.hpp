#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class C_CSGO_MapPreviewCameraPath : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flZFar; // 0x568            
            float m_flZNear; // 0x56c            
            bool m_bLoop; // 0x570            
            bool m_bVerticalFOV; // 0x571            
            bool m_bConstantSpeed; // 0x572            
            uint8_t _pad0573[0x1]; // 0x573
            float m_flDuration; // 0x574            
            uint8_t _pad0578[0x40]; // 0x578
            float m_flPathLength; // 0x5b8            
            float m_flPathDuration; // 0x5bc            
            uint8_t _pad05c0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_MapPreviewCameraPath) == 0x5d8);
    };
};
