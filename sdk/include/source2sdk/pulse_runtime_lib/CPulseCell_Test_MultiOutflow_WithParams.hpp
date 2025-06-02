#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/SignatureOutflow_Continue.hpp"

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
        // Standard-layout class: false
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "TestDomain"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo ""
        #pragma pack(push, 1)
        class CPulseCell_Test_MultiOutflow_WithParams : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPulseCellOutflow_IsDefault
            // metadata: MPulseSignatureName
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_Out1; // 0x48            
            // metadata: MPulseSignatureName
            source2sdk::pulse_runtime_lib::SignatureOutflow_Continue m_Out2; // 0x78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Test_MultiOutflow_WithParams because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Test_MultiOutflow_WithParams) == 0xa8);
    };
};
