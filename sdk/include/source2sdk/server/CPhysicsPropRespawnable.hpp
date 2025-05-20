#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

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
        // Size: 0xd38
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysicsPropRespawnable : public source2sdk::server::CPhysicsProp
        {
        public:
            Vector m_vOriginalSpawnOrigin; // 0xd00            
            QAngle m_vOriginalSpawnAngles; // 0xd0c            
            Vector m_vOriginalMins; // 0xd18            
            Vector m_vOriginalMaxs; // 0xd24            
            float m_flRespawnDuration; // 0xd30            
            uint8_t _pad0d34[0x4];
            
            // Datamap fields:
            // void CPhysicsPropRespawnableMaterialize; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsPropRespawnable) == 0xd38);
    };
};
