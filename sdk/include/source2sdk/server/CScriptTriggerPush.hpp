#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerPush.hpp"

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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CScriptTriggerPush : public source2sdk::server::CTriggerPush
        {
        public:
            Vector m_vExtent; // 0x998            
            uint8_t _pad09a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptTriggerPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptTriggerPush) == 0x9a8);
    };
};
