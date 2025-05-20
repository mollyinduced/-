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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x30
        #pragma pack(push, 1)
        class CPulse_ResumePoint : public source2sdk::pulse_runtime_lib::CPulse_OutflowConnection
        {
        public:
            // Static fields:
            static source2sdk::pulse_runtime_lib::CPulse_ResumePoint &Get_Invalid(){return *reinterpret_cast<source2sdk::pulse_runtime_lib::CPulse_ResumePoint*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulse_ResumePoint")->GetStaticFields()[0]->m_pInstance);};
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_ResumePoint) == 0x30);
    };
};
