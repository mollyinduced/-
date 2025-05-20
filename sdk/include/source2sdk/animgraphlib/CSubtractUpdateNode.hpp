#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/CBinaryUpdateNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSubtractUpdateNode : public source2sdk::animgraphlib::CBinaryUpdateNode
        {
        public:
            uint8_t _pad0088[0x4]; // 0x88
            source2sdk::animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x8c            
            bool m_bApplyToFootMotion; // 0x90            
            bool m_bApplyChannelsSeparately; // 0x91            
            bool m_bUseModelSpace; // 0x92            
            uint8_t _pad0093[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSubtractUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSubtractUpdateNode) == 0x98);
    };
};
