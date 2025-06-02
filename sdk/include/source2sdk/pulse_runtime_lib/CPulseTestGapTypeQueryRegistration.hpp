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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x8
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MGapTypeQueriesForScopeSingleton
        #pragma pack(push, 1)
        class CPulseTestGapTypeQueryRegistration
        {
        public:
            uint8_t _pad0000[0x8];
            // Static fields:
            static source2sdk::pulse_runtime_lib::CPulseTestGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<source2sdk::pulse_runtime_lib::CPulseTestGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseTestGapTypeQueryRegistration")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseTestGapTypeQueryRegistration) == 0x8);
    };
};
