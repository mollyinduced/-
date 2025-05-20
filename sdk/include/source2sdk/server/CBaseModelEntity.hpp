#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCollisionProperty.hpp"
#include "source2sdk/server/CGlowProperty.hpp"
#include "source2sdk/server/CHitboxComponent.hpp"
#include "source2sdk/server/EntityRenderAttribute_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CRenderComponent;
    };
};

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
        // Size: 0x790
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
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
        // static metadata: MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
        #pragma pack(push, 1)
        class CBaseModelEntity : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CRenderComponent"
            // metadata: MNetworkAlias "CRenderComponent"
            // metadata: MNetworkTypeAlias "CRenderComponent"
            source2sdk::server::CRenderComponent* m_CRenderComponent; // 0x4e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::server::CHitboxComponent m_CHitboxComponent; // 0x4e8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x510            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x514            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x518            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x51c            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x520            
            std::int32_t m_nLastHitDestructiblePartIndex; // 0x524            
            uint8_t _pad0528[0x28]; // 0x528
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0x550            
            source2sdk::entity2::GameTime_t m_flDissolveStartTime; // 0x554            
            source2sdk::entity2::CEntityIOOutput m_OnIgnite; // 0x558            
            // metadata: MNetworkEnable
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x580            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x581            
            bool m_bAllowFadeInView; // 0x582            
            uint8_t _pad0583[0x1d]; // 0x583
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x50]; // 0x5a8            
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0x5f9            
            uint8_t _pad05fa[0x6]; // 0x5fa
            // metadata: MNetworkEnable
            source2sdk::server::CCollisionProperty m_Collision; // 0x600            
            // metadata: MNetworkEnable
            source2sdk::server::CGlowProperty m_Glow; // 0x6b0            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0x708            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0x70c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0x710            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0x714            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0x718            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0x71c            
            uint8_t _pad071d[0x3]; // 0x71d
            // metadata: MNetworkEnable
            std::int32_t m_nAddDecal; // 0x720            
            // metadata: MNetworkEnable
            Vector m_vDecalPosition; // 0x724            
            // metadata: MNetworkEnable
            Vector m_vDecalForwardAxis; // 0x730            
            // metadata: MNetworkEnable
            float m_flDecalHealBloodRate; // 0x73c            
            // metadata: MNetworkEnable
            float m_flDecalHealHeightRate; // 0x740            
            uint8_t _pad0744[0x4]; // 0x744
            // metadata: MNetworkEnable
            // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
            char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x748            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x760            
            uint8_t _pad0788[0x8];
            
            // Datamap fields:
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
            // void InputIgnite; // 0x0
            // float InputIgniteLifetime; // 0x0
            // int32_t InputIgnite; // 0x0
            // float InputIgnite; // 0x0
            // void InputExtinguish; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void CBaseModelEntitySUB_StartFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
            // void CBaseModelEntitySUB_FadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_StopShadowFade; // 0x0
            // Color rendercolor32; // 0x7fffffff
            // Color rendercolor; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity) == 0x790);
    };
};
