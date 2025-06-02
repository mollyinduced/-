#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncBrush.hpp"

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
        // Size: 0x7e8
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "string_t m_EffectName"
        #pragma pack(push, 1)
        class CFuncElectrifiedVolume : public source2sdk::server::CFuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_EffectName; // 0x7b0            
            CUtlSymbolLarge m_EffectInterpenetrateName; // 0x7b8            
            CUtlSymbolLarge m_EffectZapName; // 0x7c0            
            CUtlSymbolLarge m_iszEffectSource; // 0x7c8            
            uint8_t _pad07d0[0x18];
            
            // Datamap fields:
            // void InputDisable; // 0x0
            // void InputEnable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncElectrifiedVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncElectrifiedVolume) == 0x7e8);
    };
};
