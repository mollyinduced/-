#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysicsEntitySolver : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04e0[0x8]; // 0x4e0
            // m_hMovingEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMovingEntity;
            char m_hMovingEntity[0x4]; // 0x4e8            
            // m_hPhysicsBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPhysicsBlocker;
            char m_hPhysicsBlocker[0x4]; // 0x4ec            
            float m_separationDuration; // 0x4f0            
            source2sdk::entity2::GameTime_t m_cancelTime; // 0x4f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsEntitySolver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsEntitySolver) == 0x4f8);
    };
};
