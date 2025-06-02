#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerMultiple.hpp"

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
        // Size: 0x998
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CScriptTriggerMultiple : public source2sdk::server::CTriggerMultiple
        {
        public:
            Vector m_vExtent; // 0x988            
            uint8_t _pad0994[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptTriggerMultiple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptTriggerMultiple) == 0x998);
    };
};
