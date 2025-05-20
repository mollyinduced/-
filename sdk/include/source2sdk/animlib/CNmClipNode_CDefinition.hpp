#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmClipNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nPlayInReverseValueNodeIdx; // 0x10            
            std::int16_t m_nResetTimeValueNodeIdx; // 0x12            
            bool m_bSampleRootMotion; // 0x14            
            bool m_bAllowLooping; // 0x15            
            std::int16_t m_nDataSlotIdx; // 0x16            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmClipNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmClipNode_CDefinition) == 0x18);
    };
};
