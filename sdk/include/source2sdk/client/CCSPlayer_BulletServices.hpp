#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x80
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int32 m_totalHitsOnServer"
        #pragma pack(push, 1)
        class CCSPlayer_BulletServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_totalHitsOnServer; // 0x40            
            uint8_t _pad0044[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BulletServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_BulletServices) == 0x80);
    };
};
