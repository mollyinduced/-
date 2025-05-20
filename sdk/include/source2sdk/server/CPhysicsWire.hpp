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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysicsWire : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_nDensity; // 0x4e0            
            uint8_t _pad04e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsWire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsWire) == 0x4e8);
    };
};
