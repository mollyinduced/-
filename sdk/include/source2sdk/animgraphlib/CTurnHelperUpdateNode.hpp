#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTurnHelperUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0068[0x4]; // 0x68
            source2sdk::animgraphlib::AnimValueSource m_facingTarget; // 0x6c            
            float m_turnStartTimeOffset; // 0x70            
            float m_turnDuration; // 0x74            
            bool m_bMatchChildDuration; // 0x78            
            uint8_t _pad0079[0x3]; // 0x79
            float m_manualTurnOffset; // 0x7c            
            bool m_bUseManualTurnOffset; // 0x80            
            uint8_t _pad0081[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTurnHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTurnHelperUpdateNode) == 0x88);
    };
};
