#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/HitReactFixedSettings_t.hpp"

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
        // Size: 0xc8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CHitReactUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x68            
            uint8_t _pad00ac[0x8]; // 0xac
            source2sdk::animgraphlib::CAnimParamHandle m_triggerParam; // 0xb4            
            source2sdk::animgraphlib::CAnimParamHandle m_hitBoneParam; // 0xb6            
            source2sdk::animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0xb8            
            source2sdk::animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0xba            
            source2sdk::animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0xbc            
            uint8_t _pad00be[0x2]; // 0xbe
            float m_flMinDelayBetweenHits; // 0xc0            
            bool m_bResetChild; // 0xc4            
            uint8_t _pad00c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHitReactUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CHitReactUpdateNode) == 0xc8);
    };
};
