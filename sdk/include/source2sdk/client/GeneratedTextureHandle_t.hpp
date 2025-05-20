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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // 
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct GeneratedTextureHandle_t
        {
        public:
            // metadata: MPropertyFriendlyName "Generated Texture"
            // metadata: MPropertyAttributeEditor "CompositeMaterialTextureViewer"
            CUtlString m_strBitmapName; // 0x0            
            uint8_t _pad0008[0x48];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::GeneratedTextureHandle_t, m_strBitmapName) == 0x0);
        
        static_assert(sizeof(source2sdk::client::GeneratedTextureHandle_t) == 0x50);
    };
};
