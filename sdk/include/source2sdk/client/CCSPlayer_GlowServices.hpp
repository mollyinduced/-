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
        // Size: 0x50
        // Has VTable
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSPlayer_GlowServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            uint8_t _pad0040[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_GlowServices) == 0x50);
    };
};
