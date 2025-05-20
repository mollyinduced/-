#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByName "m_clrRender"
        // static metadata: MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "string_t m_iszEffectName"
        // static metadata: MNetworkVarNames "string_t m_iszSSEffectName"
        // static metadata: MNetworkVarNames "Color m_clrOverlay"
        // static metadata: MNetworkVarNames "bool m_bOn"
        // static metadata: MNetworkVarNames "bool m_bmaxColor"
        // static metadata: MNetworkVarNames "float32 m_flSize"
        // static metadata: MNetworkVarNames "float32 m_flHazeScale"
        // static metadata: MNetworkVarNames "float32 m_flRotation"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        // static metadata: MNetworkVarNames "float32 m_flAlphaHaze"
        // static metadata: MNetworkVarNames "float32 m_flAlphaScale"
        // static metadata: MNetworkVarNames "float32 m_flAlphaHdr"
        // static metadata: MNetworkVarNames "float32 m_flFarZScale"
        #pragma pack(push, 1)
        class C_Sun : public source2sdk::client::C_BaseModelEntity
        {
        public:
            source2sdk::client::ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xd28            
            source2sdk::client::ParticleIndex_t m_fxSunFlareEffectIndex; // 0xd2c            
            float m_fdistNormalize; // 0xd30            
            Vector m_vSunPos; // 0xd34            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0xd40            
            uint8_t _pad0d4c[0x4]; // 0xd4c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszEffectName; // 0xd50            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSSEffectName; // 0xd58            
            // metadata: MNetworkEnable
            Color m_clrOverlay; // 0xd60            
            // metadata: MNetworkEnable
            bool m_bOn; // 0xd64            
            // metadata: MNetworkEnable
            bool m_bmaxColor; // 0xd65            
            uint8_t _pad0d66[0x2]; // 0xd66
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            float m_flSize; // 0xd68            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            float m_flHazeScale; // 0xd6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-360.000000"
            // metadata: MNetworkMaxValue "360.000000"
            float m_flRotation; // 0xd70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHDRScaleChanged"
            float m_flHDRColorScale; // 0xd74            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "2.000000"
            float m_flAlphaHaze; // 0xd78            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "2.000000"
            float m_flAlphaScale; // 0xd7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "2.000000"
            float m_flAlphaHdr; // 0xd80            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            float m_flFarZScale; // 0xd84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sun) == 0xd88);
    };
};
