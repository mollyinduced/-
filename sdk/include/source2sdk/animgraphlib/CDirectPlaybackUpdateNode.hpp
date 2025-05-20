#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CDirectPlaybackTagData.hpp"
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
        class CDirectPlaybackUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0068[0x4]; // 0x68
            bool m_bFinishEarly; // 0x6c            
            bool m_bResetOnFinish; // 0x6d            
            uint8_t _pad006e[0x2]; // 0x6e
            // m_allTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CDirectPlaybackTagData> m_allTags;
            char m_allTags[0x18]; // 0x70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDirectPlaybackUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CDirectPlaybackUpdateNode) == 0x88);
    };
};
