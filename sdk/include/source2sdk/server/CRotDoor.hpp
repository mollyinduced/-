#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseDoor.hpp"

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
        // Size: 0xa20
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CRotDoor : public source2sdk::server::CBaseDoor
        {
        public:
            bool m_bSolidBsp; // 0xa18            
            uint8_t _pad0a19[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRotDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRotDoor) == 0xa20);
    };
};
