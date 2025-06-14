#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
        // static metadata: MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
        // static metadata: MNetworkVarNames "float m_Entity_flInfluenceRadius"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
        // static metadata: MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
        // static metadata: MNetworkVarNames "bool m_Entity_bMoveable"
        // static metadata: MNetworkVarNames "int m_Entity_nHandshake"
        // static metadata: MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
        // static metadata: MNetworkVarNames "int m_Entity_nPriority"
        // static metadata: MNetworkVarNames "float m_Entity_flEdgeFadeDist"
        // static metadata: MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
        // static metadata: MNetworkVarNames "float m_Entity_flDiffuseScale"
        // static metadata: MNetworkVarNames "bool m_Entity_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
        // static metadata: MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
        // static metadata: MNetworkVarNames "bool m_Entity_bEnabled"
        #pragma pack(push, 1)
        class C_EnvCubemap : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x80]; // 0x568
            // metadata: MNetworkEnable
            // m_Entity_hCubemapTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture;
            char m_Entity_hCubemapTexture[0x8]; // 0x5e8            
            // metadata: MNetworkEnable
            bool m_Entity_bCustomCubemapTexture; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            // metadata: MNetworkEnable
            float m_Entity_flInfluenceRadius; // 0x5f4            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxProjectMins; // 0x5f8            
            // metadata: MNetworkEnable
            Vector m_Entity_vBoxProjectMaxs; // 0x604            
            // metadata: MNetworkEnable
            bool m_Entity_bMoveable; // 0x610            
            uint8_t _pad0611[0x3]; // 0x611
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nHandshake; // 0x614            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x618            
            // metadata: MNetworkEnable
            std::int32_t m_Entity_nPriority; // 0x61c            
            // metadata: MNetworkEnable
            float m_Entity_flEdgeFadeDist; // 0x620            
            // metadata: MNetworkEnable
            Vector m_Entity_vEdgeFadeDists; // 0x624            
            // metadata: MNetworkEnable
            float m_Entity_flDiffuseScale; // 0x630            
            // metadata: MNetworkEnable
            bool m_Entity_bStartDisabled; // 0x634            
            // metadata: MNetworkEnable
            bool m_Entity_bDefaultEnvMap; // 0x635            
            // metadata: MNetworkEnable
            bool m_Entity_bDefaultSpecEnvMap; // 0x636            
            // metadata: MNetworkEnable
            bool m_Entity_bIndoorCubeMap; // 0x637            
            // metadata: MNetworkEnable
            bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x638            
            uint8_t _pad0639[0xf]; // 0x639
            // metadata: MNetworkEnable
            bool m_Entity_bEnabled; // 0x648            
            uint8_t _pad0649[0x7];
            
            // Datamap fields:
            // void m_Entity_pSceneObject; // 0x640
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvCubemap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvCubemap) == 0x650);
    };
};
