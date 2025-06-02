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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0558[0x48]; // 0x558
            Vector m_vAnchorOffsetRestore; // 0x5a0            
            uint8_t _pad05ac[0x4];
            
            // Datamap fields:
            // void CSplineConstraintUpdateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x5b0);
    };
};
