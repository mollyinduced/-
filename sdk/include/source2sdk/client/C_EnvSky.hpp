#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0xd88
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "Color m_vTintColor"
        // static metadata: MNetworkVarNames "Color m_vTintColorLightingOnly"
        // static metadata: MNetworkVarNames "float m_flBrightnessScale"
        // static metadata: MNetworkVarNames "int m_nFogType"
        // static metadata: MNetworkVarNames "float m_flFogMinStart"
        // static metadata: MNetworkVarNames "float m_flFogMinEnd"
        // static metadata: MNetworkVarNames "float m_flFogMaxStart"
        // static metadata: MNetworkVarNames "float m_flFogMaxEnd"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class C_EnvSky : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0xd28            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
            char m_hSkyMaterialLightingOnly[0x8]; // 0xd30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            bool m_bStartDisabled; // 0xd38            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            Color m_vTintColor; // 0xd39            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            Color m_vTintColorLightingOnly; // 0xd3d            
            uint8_t _pad0d41[0x3]; // 0xd41
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flBrightnessScale; // 0xd44            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            std::int32_t m_nFogType; // 0xd48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMinStart; // 0xd4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMinEnd; // 0xd50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMaxStart; // 0xd54            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMaxEnd; // 0xd58            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            bool m_bEnabled; // 0xd5c            
            uint8_t _pad0d5d[0x2b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvSky because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvSky) == 0xd88);
    };
};
