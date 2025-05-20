#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CClientAlphaProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CRenderComponent;
    };
};

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
        // Size: 0xd28
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
        // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
        // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
        // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
        // static metadata: MNetworkVarNames "Color m_clrRender"
        // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
        // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
        // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
        // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
        // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
        // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
        // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
        // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
        // static metadata: MNetworkVarNames "float32 m_flFadeScale"
        // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
        // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
        // static metadata: MNetworkVarNames "int m_nAddDecal"
        // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
        // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
        // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
        // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
        #pragma pack(push, 1)
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x4e8]; // 0x568
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CRenderComponent"
            // metadata: MNetworkAlias "CRenderComponent"
            // metadata: MNetworkTypeAlias "CRenderComponent"
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0xa50            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0xa58            
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0xa80            
            uint8_t _pad0a84[0x24]; // 0xa84
            bool m_bInitModelEffects; // 0xaa8            
            bool m_bIsStaticProp; // 0xaa9            
            uint8_t _pad0aaa[0x2]; // 0xaaa
            std::int32_t m_nLastAddDecal; // 0xaac            
            std::int32_t m_nDecalsAdded; // 0xab0            
            std::int32_t m_iOldHealth; // 0xab4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderModeChanged"
            source2sdk::client::RenderMode_t m_nRenderMode; // 0xab8            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0xab9            
            bool m_bAllowFadeInView; // 0xaba            
            uint8_t _pad0abb[0x1d]; // 0xabb
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0xad8            
            uint8_t _pad0adc[0x4]; // 0xadc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x50]; // 0xae0            
            uint8_t _pad0b30[0x18]; // 0xb30
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0xb48            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0xb49            
            uint8_t _pad0b4a[0x6]; // 0xb4a
            // metadata: MNetworkEnable
            source2sdk::client::CCollisionProperty m_Collision; // 0xb50            
            // metadata: MNetworkEnable
            source2sdk::client::CGlowProperty m_Glow; // 0xc00            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0xc58            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0xc5c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0xc60            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0xc64            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0xc68            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0xc6c            
            uint8_t _pad0c6d[0x3]; // 0xc6d
            // metadata: MNetworkEnable
            std::int32_t m_nAddDecal; // 0xc70            
            // metadata: MNetworkEnable
            Vector m_vDecalPosition; // 0xc74            
            // metadata: MNetworkEnable
            Vector m_vDecalForwardAxis; // 0xc80            
            // metadata: MNetworkEnable
            float m_flDecalHealBloodRate; // 0xc8c            
            // metadata: MNetworkEnable
            float m_flDecalHealHeightRate; // 0xc90            
            uint8_t _pad0c94[0x4]; // 0xc94
            // metadata: MNetworkEnable
            // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
            char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0xc98            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0xcb0            
            uint8_t _pad0cd8[0x8]; // 0xcd8
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xce0            
            Color m_ClientOverrideTint; // 0xce8            
            bool m_bUseClientOverrideTint; // 0xcec            
            uint8_t _pad0ced[0x3b];
            
            // Datamap fields:
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void m_Ropes; // 0xa88
            // Color rendercolor32; // 0x7fffffff
            // Color rendercolor; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0xd28);
    };
};
