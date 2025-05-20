#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/BoneMaskBlendSpace.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneMaskUpdateNode : public source2sdk::animgraphlib::CBinaryUpdateNode
        {
        public:
            uint8_t _pad0088[0x4]; // 0x88
            std::int32_t m_nWeightListIndex; // 0x8c            
            float m_flRootMotionBlend; // 0x90            
            source2sdk::animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x94            
            source2sdk::animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x98            
            bool m_bUseBlendScale; // 0x9c            
            uint8_t _pad009d[0x3]; // 0x9d
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0xa0            
            source2sdk::animgraphlib::CAnimParamHandle m_hBlendParameter; // 0xa4            
            uint8_t _pad00a6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneMaskUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBoneMaskUpdateNode) == 0xa8);
    };
};
