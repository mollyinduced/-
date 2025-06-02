#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseRuntimeMethodArg
        {
        public:
            CKV3MemberNameWithStorage m_Name; // 0x0            
            CUtlString m_Description; // 0x38            
            CPulseValueFullType m_Type; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg, m_Description) == 0x38);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg, m_Type) == 0x40);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseRuntimeMethodArg) == 0x50);
    };
};
