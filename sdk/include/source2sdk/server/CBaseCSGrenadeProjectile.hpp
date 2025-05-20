#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseGrenade.hpp"

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
        // Size: 0xb50
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "int m_nBounces"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
        // static metadata: MNetworkVarNames "int m_nExplodeEffectTickBegin"
        // static metadata: MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
        #pragma pack(push, 1)
        class CBaseCSGrenadeProjectile : public source2sdk::server::CBaseGrenade
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0xae0            
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0xaec            
            // metadata: MNetworkEnable
            std::int32_t m_nBounces; // 0xaf8            
            uint8_t _pad0afc[0x4]; // 0xafc
            // metadata: MNetworkEnable
            // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
            char m_nExplodeEffectIndex[0x8]; // 0xb00            
            // metadata: MNetworkEnable
            std::int32_t m_nExplodeEffectTickBegin; // 0xb08            
            // metadata: MNetworkEnable
            Vector m_vecExplodeEffectOrigin; // 0xb0c            
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0xb18            
            std::uint8_t m_unOGSExtraFlags; // 0xb1c            
            bool m_bDetonationRecorded; // 0xb1d            
            std::uint16_t m_nItemIndex; // 0xb1e            
            Vector m_vecOriginalSpawnLocation; // 0xb20            
            source2sdk::entity2::GameTime_t m_flLastBounceSoundTime; // 0xb2c            
            RotationVector m_vecGrenadeSpin; // 0xb30            
            Vector m_vecLastHitSurfaceNormal; // 0xb3c            
            std::int32_t m_nTicksAtZeroVelocity; // 0xb48            
            bool m_bHasEverHitEnemy; // 0xb4c            
            uint8_t _pad0b4d[0x3];
            
            // Static fields:
            static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCSGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCSGrenadeProjectile) == 0xb50);
    };
};
