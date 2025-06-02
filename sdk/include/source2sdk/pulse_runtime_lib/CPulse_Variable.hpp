#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

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
        class CPulse_Variable
        {
        public:
            CUtlSymbolLarge m_Name; // 0x0            
            CUtlString m_Description; // 0x8            
            CPulseValueFullType m_Type; // 0x10            
            KeyValues3 m_DefaultValue; // 0x20            
            uint8_t _pad0030[0x2]; // 0x30
            bool m_bIsPublic; // 0x32            
            bool m_bIsObservable; // 0x33            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Description) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Type) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_DefaultValue) == 0x20);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsPublic) == 0x32);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsObservable) == 0x33);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_nEditorNodeID) == 0x34);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_Variable) == 0x38);
    };
};
