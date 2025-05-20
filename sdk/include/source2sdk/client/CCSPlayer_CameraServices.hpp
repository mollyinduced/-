#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCSPlayerBase_CameraServices.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x248
        // Has VTable
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSPlayer_CameraServices : public source2sdk::client::CCSPlayerBase_CameraServices
        {
        public:
            float m_flDeathCamTilt; // 0x228            
            uint8_t _pad022c[0x4]; // 0x22c
            Vector m_vClientScopeInaccuracy; // 0x230            
            uint8_t _pad023c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_CameraServices) == 0x248);
    };
};
