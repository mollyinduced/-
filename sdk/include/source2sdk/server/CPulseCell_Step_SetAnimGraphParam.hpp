#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "ServerPointEntity"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo
        // static metadata: MPulseCellWithCustomDocNode
        #pragma pack(push, 1)
        class CPulseCell_Step_SetAnimGraphParam : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            CUtlString m_ParamName; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Step_SetAnimGraphParam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Step_SetAnimGraphParam) == 0x50);
    };
};
