#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x30
        #pragma pack(push, 1)
        struct ServerAuthoritativeWeaponSlot_t
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            std::uint16_t unClass; // 0x28            
            std::uint16_t unSlot; // 0x2a            
            std::uint16_t unItemDefIdx; // 0x2c            
            uint8_t _pad002e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unClass) == 0x28);
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unSlot) == 0x2a);
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unItemDefIdx) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::ServerAuthoritativeWeaponSlot_t) == 0x30);
    };
};
