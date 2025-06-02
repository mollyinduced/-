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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CSoundEventParameter : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x8]; // 0x4e0
            CUtlSymbolLarge m_iszParamName; // 0x4e8            
            float m_flFloatValue; // 0x4f0            
            uint8_t _pad04f4[0x4];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetParamName; // 0x0
            // float InputSetFloatValue; // 0x0
            // void m_nGUID; // 0x4e0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventParameter) == 0x4f8);
    };
};
