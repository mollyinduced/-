#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/materialsystem2/PostProcessingBloomParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingLocalContrastParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingTonemapParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingVignetteParameters_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace materialsystem2
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x118
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessingResource_t
        {
        public:
            bool m_bHasTonemapParams; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            source2sdk::materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x4            
            bool m_bHasBloomParams; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            source2sdk::materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x44            
            bool m_bHasVignetteParams; // 0xb4            
            uint8_t _pad00b5[0x3]; // 0xb5
            source2sdk::materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8            
            bool m_bHasLocalContrastParams; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0            
            std::int32_t m_nColorCorrectionVolumeDim; // 0xf4            
            CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8            
            bool m_bHasColorCorrection; // 0x110            
            uint8_t _pad0111[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasTonemapParams) == 0x0);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_toneMapParams) == 0x4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasBloomParams) == 0x40);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bloomParams) == 0x44);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasVignetteParams) == 0xb4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_vignetteParams) == 0xb8);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasLocalContrastParams) == 0xdc);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_localConstrastParams) == 0xe0);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_nColorCorrectionVolumeDim) == 0xf4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_colorCorrectionVolumeData) == 0xf8);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasColorCorrection) == 0x110);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingResource_t) == 0x118);
    };
};
