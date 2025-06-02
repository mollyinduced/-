#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseGrenade.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1208
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
        class C_BaseCSGrenadeProjectile : public source2sdk::client::C_BaseGrenade
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0x1170            
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0x117c            
            // metadata: MNetworkEnable
            std::int32_t m_nBounces; // 0x1188            
            uint8_t _pad118c[0x4]; // 0x118c
            // metadata: MNetworkEnable
            // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
            char m_nExplodeEffectIndex[0x8]; // 0x1190            
            // metadata: MNetworkEnable
            std::int32_t m_nExplodeEffectTickBegin; // 0x1198            
            // metadata: MNetworkEnable
            Vector m_vecExplodeEffectOrigin; // 0x119c            
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0x11a8            
            Vector vecLastTrailLinePos; // 0x11ac            
            source2sdk::entity2::GameTime_t flNextTrailLineTime; // 0x11b8            
            bool m_bExplodeEffectBegan; // 0x11bc            
            bool m_bCanCreateGrenadeTrail; // 0x11bd            
            uint8_t _pad11be[0x2]; // 0x11be
            source2sdk::client::ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x11c0            
            uint8_t _pad11c4[0x4]; // 0x11c4
            // m_hSnapshotTrajectoryParticleSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshotTrajectoryParticleSnapshot;
            char m_hSnapshotTrajectoryParticleSnapshot[0x8]; // 0x11c8            
            // m_arrTrajectoryTrailPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_arrTrajectoryTrailPoints;
            char m_arrTrajectoryTrailPoints[0x18]; // 0x11d0            
            // m_arrTrajectoryTrailPointCreationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_arrTrajectoryTrailPointCreationTimes;
            char m_arrTrajectoryTrailPointCreationTimes[0x18]; // 0x11e8            
            float m_flTrajectoryTrailEffectCreationTime; // 0x1200            
            uint8_t _pad1204[0x4];
            
            // Static fields:
            static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseCSGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseCSGrenadeProjectile) == 0x1208);
    };
};
