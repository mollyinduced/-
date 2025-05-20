#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/BinaryNodeTiming.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBinaryUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pChild1; // 0x58            
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pChild2; // 0x68            
            source2sdk::animgraphlib::BinaryNodeTiming m_timingBehavior; // 0x78            
            float m_flTimingBlend; // 0x7c            
            bool m_bResetChild1; // 0x80            
            bool m_bResetChild2; // 0x81            
            uint8_t _pad0082[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBinaryUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBinaryUpdateNode) == 0x88);
    };
};
