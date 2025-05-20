#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xfd8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BulletHitModel : public source2sdk::client::CBaseAnimGraph
        {
        public:
            matrix3x4_t m_matLocal; // 0xf88            
            std::int32_t m_iBoneIndex; // 0xfb8            
            // m_hPlayerParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPlayerParent;
            char m_hPlayerParent[0x4]; // 0xfbc            
            bool m_bIsHit; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            float m_flTimeCreated; // 0xfc4            
            Vector m_vecStartPos; // 0xfc8            
            uint8_t _pad0fd4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BulletHitModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BulletHitModel) == 0xfd8);
    };
};
