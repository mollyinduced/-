#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        #pragma pack(push, 1)
        struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t
        {
        public:
            CUtlSymbolLarge m_TagName; // 0x0            
            uint8_t _pad0008[0x28];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_WaitForCursorsWithTagBase_CursorState_t, m_TagName) == 0x0);
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_WaitForCursorsWithTagBase_CursorState_t) == 0x30);
    };
};
