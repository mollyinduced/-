#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        // 
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseInternal_IsCursor
        #pragma pack(push, 1)
        class CTestDomainDerived_Cursor : public source2sdk::pulse_runtime_lib::CPulseExecCursor
        {
        public:
            std::int32_t m_nCursorValueA; // 0xa8            
            std::int32_t m_nCursorValueB; // 0xac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestDomainDerived_Cursor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CTestDomainDerived_Cursor) == 0xb0);
    };
};
