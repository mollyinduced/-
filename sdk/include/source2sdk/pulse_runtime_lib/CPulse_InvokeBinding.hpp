#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeCellIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"

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
        // Size: 0x88
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_InvokeBinding
        {
        public:
            source2sdk::pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x0            
            CUtlSymbolLarge m_FuncName; // 0x20            
            source2sdk::pulse_runtime_lib::PulseRuntimeCellIndex_t m_nCellIndex; // 0x28            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c            
            std::int32_t m_nSrcInstruction; // 0x30            
            uint8_t _pad0034[0x54];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_RegisterMap) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_FuncName) == 0x20);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nCellIndex) == 0x28);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nSrcChunk) == 0x2c);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nSrcInstruction) == 0x30);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding) == 0x88);
    };
};
