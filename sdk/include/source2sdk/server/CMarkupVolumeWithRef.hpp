#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolumeTagged.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7e8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CMarkupVolumeWithRef : public source2sdk::server::CMarkupVolumeTagged
        {
        public:
            bool m_bUseRef; // 0x7d0            
            uint8_t _pad07d1[0x3]; // 0x7d1
            Vector m_vRefPos; // 0x7d4            
            float m_flRefDot; // 0x7e0            
            uint8_t _pad07e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeWithRef) == 0x7e8);
    };
};
