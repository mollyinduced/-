#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundAreaEntityBase.hpp"

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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMin"
        // static metadata: MNetworkVarNames "Vector m_vMax"
        #pragma pack(push, 1)
        class CSoundAreaEntityOrientedBox : public source2sdk::server::CSoundAreaEntityBase
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMin; // 0x500            
            // metadata: MNetworkEnable
            Vector m_vMax; // 0x50c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundAreaEntityOrientedBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundAreaEntityOrientedBox) == 0x518);
    };
};
