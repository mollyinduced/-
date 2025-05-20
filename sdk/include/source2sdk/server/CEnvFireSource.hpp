#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CEnvFireSource : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bEnabled; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            float m_radius; // 0x4e4            
            float m_damage; // 0x4e8            
            uint8_t _pad04ec[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvFireSource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvFireSource) == 0x4f0);
    };
};
