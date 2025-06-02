#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"

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
        // Size: 0x2e40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nSmokeEffectTickBegin"
        // static metadata: MNetworkVarNames "bool m_bDidSmokeEffect"
        // static metadata: MNetworkVarNames "int m_nRandomSeed"
        // static metadata: MNetworkVarNames "Vector m_vSmokeColor"
        // static metadata: MNetworkVarNames "Vector m_vSmokeDetonationPos"
        // static metadata: MNetworkVarNames "uint8 m_VoxelFrameData"
        // static metadata: MNetworkVarNames "int m_nVoxelFrameDataSize"
        // static metadata: MNetworkVarNames "int m_nVoxelUpdate"
        #pragma pack(push, 1)
        class CSmokeGrenadeProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad0b50[0x18]; // 0xb50
            // metadata: MNetworkEnable
            std::int32_t m_nSmokeEffectTickBegin; // 0xb68            
            // metadata: MNetworkEnable
            bool m_bDidSmokeEffect; // 0xb6c            
            uint8_t _pad0b6d[0x3]; // 0xb6d
            // metadata: MNetworkEnable
            std::int32_t m_nRandomSeed; // 0xb70            
            // metadata: MNetworkEnable
            Vector m_vSmokeColor; // 0xb74            
            // metadata: MNetworkEnable
            Vector m_vSmokeDetonationPos; // 0xb80            
            uint8_t _pad0b8c[0x4]; // 0xb8c
            // metadata: MNetworkEnable
            // m_VoxelFrameData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_VoxelFrameData;
            char m_VoxelFrameData[0x18]; // 0xb90            
            // metadata: MNetworkEnable
            std::int32_t m_nVoxelFrameDataSize; // 0xba8            
            // metadata: MNetworkEnable
            std::int32_t m_nVoxelUpdate; // 0xbac            
            source2sdk::entity2::GameTime_t m_flLastBounce; // 0xbb0            
            source2sdk::entity2::GameTime_t m_fllastSimulationTime; // 0xbb4            
            uint8_t _pad0bb8[0x2280]; // 0xbb8
            bool m_bExplodeFromInferno; // 0x2e38            
            uint8_t _pad2e39[0x7];
            
            // Datamap fields:
            // void CSmokeGrenadeProjectileThink_Detonate; // 0x0
            // void CSmokeGrenadeProjectileThink_Update; // 0x0
            // void CSmokeGrenadeProjectileThink_Remove; // 0x0
            // void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
            // void InitializeSpawnFromWorld; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmokeGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSmokeGrenadeProjectile) == 0x2e40);
    };
};
