#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x1530
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
        // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
        // static metadata: MNetworkVarNames "int m_Entity_nPriority"
        // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeX"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeY"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
        // static metadata: MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
        // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
        #pragma pack(push, 1)
        class CEnvLightProbeVolume : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0xfe0]; // 0x4e0
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture;
            char m_Entity_hLightProbeTexture[0x8]; // 0x14c0            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightIndicesTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture;
            char m_Entity_hLightProbeDirectLightIndicesTexture[0x8]; // 0x14c8            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightScalarsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture;
            char m_Entity_hLightProbeDirectLightScalarsTexture[0x8]; // 0x14d0            
            // metadata: MNetworkEnable
            // m_Entity_hLightProbeDirectLightShadowsTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture;
            char m_Entity_hLightProbeDirectLightShadowsTexture[0x8]; // 0x14d8            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMins; // 0x14e0            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxMaxs; // 0x14ec            
            // metadata: MNetworkEnable
            bool m_Entity_bMoveable; // 0x14f8            
            uint8_t _pad14f9[0x3]; // 0x14f9
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nHandshake; // 0x14fc            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nPriority; // 0x1500            
            // metadata: MNetworkEnable
            bool m_Entity_bStartDisabled; // 0x1504            
            uint8_t _pad1505[0x3]; // 0x1505
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeX; // 0x1508            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeY; // 0x150c            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeSizeZ; // 0x1510            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasX; // 0x1514            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasY; // 0x1518            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nLightProbeAtlasZ; // 0x151c            
            uint8_t _pad1520[0x9]; // 0x1520
            // metadata: MNetworkEnable
            bool m_Entity_bEnabled; // 0x1529            
            uint8_t _pad152a[0x6];
            
            // Datamap fields:
            // void m_Entity_pSceneObject; // 0x1520
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvLightProbeVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvLightProbeVolume) == 0x1530);
    };
};
