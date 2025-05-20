#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "float m_flStrength"
        // static metadata: MNetworkVarNames "int m_nFalloffShape"
        // static metadata: MNetworkVarNames "float m_flFalloffExponent"
        // static metadata: MNetworkVarNames "float m_flHeightFogDepth"
        // static metadata: MNetworkVarNames "float m_fHeightFogEdgeWidth"
        // static metadata: MNetworkVarNames "float m_fIndirectLightStrength"
        // static metadata: MNetworkVarNames "float m_fSunLightStrength"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideSunLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideNoiseStrength"
        // static metadata: MNetworkVarNames "bool m_bAllowLPVIndirect"
        #pragma pack(push, 1)
        class C_EnvVolumetricFogVolume : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x568            
            uint8_t _pad0569[0x3]; // 0x569
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x56c            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x578            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x584            
            uint8_t _pad0585[0x3]; // 0x585
            // metadata: MNetworkEnable
            float m_flStrength; // 0x588            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x58c            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x590            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x594            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x598            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x59c            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x5a0            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x5a4            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x5a8            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x5a9            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x5aa            
            // metadata: MNetworkEnable
            bool m_bAllowLPVIndirect; // 0x5ab            
            uint8_t _pad05ac[0x4];
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogVolume) == 0x5b0);
    };
};
