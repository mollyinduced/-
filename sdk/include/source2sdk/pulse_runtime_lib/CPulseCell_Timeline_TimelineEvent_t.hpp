#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_Timeline_TimelineEvent_t
        {
        public:
            float m_flTimeFromPrevious; // 0x0            
            bool m_bPauseForPreviousEvents; // 0x4            
            bool m_bCallModeSync; // 0x5            
            uint8_t _pad0006[0x2]; // 0x6
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_EventOutflow; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, m_flTimeFromPrevious) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, m_bPauseForPreviousEvents) == 0x4);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, m_bCallModeSync) == 0x5);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t, m_EventOutflow) == 0x8);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Timeline_TimelineEvent_t) == 0x38);
    };
};
