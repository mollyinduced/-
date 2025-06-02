#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"

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
        // Size: 0xf88
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0d28[0x78]; // 0xd28
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xda0            
            uint8_t _pad0da1[0x1]; // 0xda1
            bool m_bSuppressAnimEventSounds; // 0xda2            
            uint8_t _pad0da3[0xd]; // 0xda3
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xdb0            
            uint8_t _pad0db1[0x3]; // 0xdb1
            float m_flMaxSlopeDistance; // 0xdb4            
            Vector m_vLastSlopeCheckPos; // 0xdb8            
            bool m_bAnimationUpdateScheduled; // 0xdc4            
            uint8_t _pad0dc5[0x3]; // 0xdc5
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0xdc8            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0xdd4            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xdd8            
            bool m_bBuiltRagdoll; // 0xde0            
            uint8_t _pad0de1[0x17]; // 0xde1
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xdf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0xe40            
            uint8_t _pad0e41[0xf]; // 0xe41
            bool m_bHasAnimatedMaterialAttributes; // 0xe50            
            uint8_t _pad0e51[0x137];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0xd98
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xf88);
    };
};
