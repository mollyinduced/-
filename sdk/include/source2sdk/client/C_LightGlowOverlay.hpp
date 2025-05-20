#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGlowOverlay.hpp"

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
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class C_LightGlowOverlay : public source2sdk::client::CGlowOverlay
        {
        public:
            Vector m_vecOrigin; // 0xd0            
            Vector m_vecDirection; // 0xdc            
            std::int32_t m_nMinDist; // 0xe8            
            std::int32_t m_nMaxDist; // 0xec            
            std::int32_t m_nOuterMaxDist; // 0xf0            
            bool m_bOneSided; // 0xf4            
            bool m_bModulateByDot; // 0xf5            
            uint8_t _pad00f6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LightGlowOverlay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LightGlowOverlay) == 0xf8);
    };
};
