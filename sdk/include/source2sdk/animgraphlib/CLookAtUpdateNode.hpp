#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/LookAtOpFixedSettings_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x150
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLookAtUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0068[0x8]; // 0x68
            source2sdk::animgraphlib::LookAtOpFixedSettings_t m_opFixedSettings; // 0x70            
            uint8_t _pad0130[0x8]; // 0x130
            source2sdk::animgraphlib::AnimVectorSource m_target; // 0x138            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x13c            
            source2sdk::animgraphlib::CAnimParamHandle m_weightParamIndex; // 0x13e            
            bool m_bResetChild; // 0x140            
            bool m_bLockWhenWaning; // 0x141            
            uint8_t _pad0142[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLookAtUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLookAtUpdateNode) == 0x150);
    };
};
