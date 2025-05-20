#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

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
        // Size: 0x570
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPointChildModifier : public source2sdk::client::C_PointEntity
        {
        public:
            bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x568            
            uint8_t _pad0569[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointChildModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointChildModifier) == 0x570);
    };
};
