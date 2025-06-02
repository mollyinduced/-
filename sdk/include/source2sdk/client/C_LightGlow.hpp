#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_LightGlowOverlay.hpp"

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
        // Size: 0xe40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
        // static metadata: MNetworkIncludeByName "m_clrRender"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "uint32 m_nHorizontalSize"
        // static metadata: MNetworkVarNames "uint32 m_nVerticalSize"
        // static metadata: MNetworkVarNames "uint32 m_nMinDist"
        // static metadata: MNetworkVarNames "uint32 m_nMaxDist"
        // static metadata: MNetworkVarNames "uint32 m_nOuterMaxDist"
        // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        #pragma pack(push, 1)
        class C_LightGlow : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_nHorizontalSize; // 0xd28            
            // metadata: MNetworkEnable
            std::uint32_t m_nVerticalSize; // 0xd2c            
            // metadata: MNetworkEnable
            std::uint32_t m_nMinDist; // 0xd30            
            // metadata: MNetworkEnable
            std::uint32_t m_nMaxDist; // 0xd34            
            // metadata: MNetworkEnable
            std::uint32_t m_nOuterMaxDist; // 0xd38            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "6"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "64.000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flGlowProxySize; // 0xd3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "100.000000"
            // metadata: MNetworkChangeCallback "OnHDRColorScaleChanged"
            float m_flHDRColorScale; // 0xd40            
            uint8_t _pad0d44[0x4]; // 0xd44
            source2sdk::client::C_LightGlowOverlay m_GlowOverlay; // 0xd48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LightGlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LightGlow) == 0xe40);
    };
};
