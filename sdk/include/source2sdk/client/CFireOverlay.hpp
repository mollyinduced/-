#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGlowOverlay.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_FireSmoke;
    };
};

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
        // Size: 0x110
        // Has VTable
        #pragma pack(push, 1)
        class CFireOverlay : public source2sdk::client::CGlowOverlay
        {
        public:
            source2sdk::client::C_FireSmoke* m_pOwner; // 0xd0            
            Vector m_vBaseColors[4]; // 0xd8            
            float m_flScale; // 0x108            
            std::int32_t m_nGUID; // 0x10c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFireOverlay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFireOverlay) == 0x110);
    };
};
