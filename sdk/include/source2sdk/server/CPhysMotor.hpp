#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/CMotorController.hpp"
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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysMotor : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nameAttach; // 0x4e0            
            // m_hAttachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedObject;
            char m_hAttachedObject[0x4]; // 0x4e8            
            float m_spinUp; // 0x4ec            
            float m_additionalAcceleration; // 0x4f0            
            float m_angularAcceleration; // 0x4f4            
            source2sdk::entity2::GameTime_t m_lastTime; // 0x4f8            
            uint8_t _pad04fc[0x14]; // 0x4fc
            source2sdk::server::CMotorController m_motor; // 0x510            
            
            // Datamap fields:
            // float InputSetTargetSpeed; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMotor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMotor) == 0x530);
    };
};
