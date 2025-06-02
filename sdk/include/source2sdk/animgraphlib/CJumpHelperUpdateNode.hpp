#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CSequenceUpdateNode.hpp"
#include "source2sdk/animgraphlib/JumpCorrectionMethod.hpp"

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
        // Size: 0xd0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CJumpHelperUpdateNode : public source2sdk::animgraphlib::CSequenceUpdateNode
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetParam; // 0xa8            
            uint8_t _pad00aa[0x2]; // 0xaa
            Vector m_flOriginalJumpMovement; // 0xac            
            float m_flOriginalJumpDuration; // 0xb8            
            float m_flJumpStartCycle; // 0xbc            
            float m_flJumpEndCycle; // 0xc0            
            source2sdk::animgraphlib::JumpCorrectionMethod m_eCorrectionMethod; // 0xc4            
            bool m_bTranslationAxis[3]; // 0xc8            
            bool m_bScaleSpeed; // 0xcb            
            uint8_t _pad00cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CJumpHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CJumpHelperUpdateNode) == 0xd0);
    };
};
