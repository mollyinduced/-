#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CEnvFireSensor : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bEnabled; // 0x4e0            
            bool m_bHeatAtLevel; // 0x4e1            
            uint8_t _pad04e2[0x2]; // 0x4e2
            float m_radius; // 0x4e4            
            float m_targetLevel; // 0x4e8            
            float m_targetTime; // 0x4ec            
            float m_levelTime; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            source2sdk::entity2::CEntityIOOutput m_OnHeatLevelStart; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnHeatLevelEnd; // 0x520            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvFireSensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvFireSensor) == 0x548);
    };
};
