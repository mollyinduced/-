#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        // Size: 0x588
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysWheelConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flSuspensionFrequency; // 0x558            
            float m_flSuspensionDampingRatio; // 0x55c            
            float m_flSuspensionHeightOffset; // 0x560            
            bool m_bEnableSuspensionLimit; // 0x564            
            uint8_t _pad0565[0x3]; // 0x565
            float m_flMinSuspensionOffset; // 0x568            
            float m_flMaxSuspensionOffset; // 0x56c            
            bool m_bEnableSteeringLimit; // 0x570            
            uint8_t _pad0571[0x3]; // 0x571
            float m_flMinSteeringAngle; // 0x574            
            float m_flMaxSteeringAngle; // 0x578            
            float m_flSteeringAxisFriction; // 0x57c            
            float m_flSpinAxisFriction; // 0x580            
            uint8_t _pad0584[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysWheelConstraint) == 0x588);
    };
};
