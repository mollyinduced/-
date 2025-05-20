#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x58
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int32 m_iGlowType"
        // static metadata: MNetworkVarNames "int32 m_iGlowTeam"
        // static metadata: MNetworkVarNames "int32 m_nGlowRange"
        // static metadata: MNetworkVarNames "int32 m_nGlowRangeMin"
        // static metadata: MNetworkVarNames "Color m_glowColorOverride"
        // static metadata: MNetworkVarNames "bool m_bFlashing"
        // static metadata: MNetworkVarNames "float m_flGlowTime"
        // static metadata: MNetworkVarNames "float m_flGlowStartTime"
        // static metadata: MNetworkVarNames "bool m_bEligibleForScreenHighlight"
        #pragma pack(push, 1)
        class CGlowProperty
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector m_fGlowColor; // 0x8            
            uint8_t _pad0014[0x1c]; // 0x14
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGlowTypeChanged"
            std::int32_t m_iGlowType; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_iGlowTeam; // 0x34            
            // metadata: MNetworkEnable
            std::int32_t m_nGlowRange; // 0x38            
            // metadata: MNetworkEnable
            std::int32_t m_nGlowRangeMin; // 0x3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGlowColorChanged"
            Color m_glowColorOverride; // 0x40            
            // metadata: MNetworkEnable
            bool m_bFlashing; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MNetworkEnable
            float m_flGlowTime; // 0x48            
            // metadata: MNetworkEnable
            float m_flGlowStartTime; // 0x4c            
            // metadata: MNetworkEnable
            bool m_bEligibleForScreenHighlight; // 0x50            
            bool m_bGlowing; // 0x51            
            uint8_t _pad0052[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_fGlowColor) == 0x8);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_iGlowType) == 0x30);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_iGlowTeam) == 0x34);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_nGlowRange) == 0x38);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_nGlowRangeMin) == 0x3c);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_glowColorOverride) == 0x40);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_bFlashing) == 0x44);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_flGlowTime) == 0x48);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_flGlowStartTime) == 0x4c);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_bEligibleForScreenHighlight) == 0x50);
        static_assert(offsetof(source2sdk::server::CGlowProperty, m_bGlowing) == 0x51);
        
        static_assert(sizeof(source2sdk::server::CGlowProperty) == 0x58);
    };
};
