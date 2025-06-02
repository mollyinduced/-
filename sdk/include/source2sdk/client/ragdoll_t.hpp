#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdollelement_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        #pragma pack(push, 1)
        struct ragdoll_t
        {
        public:
            // list has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ragdollelement_t> list;
            char list[0x18]; // 0x0            
            // boneIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> boneIndex;
            char boneIndex[0x18]; // 0x18            
            bool allowStretch; // 0x30            
            bool unused; // 0x31            
            uint8_t _pad0032[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ragdoll_t, list) == 0x0);
        static_assert(offsetof(source2sdk::client::ragdoll_t, boneIndex) == 0x18);
        static_assert(offsetof(source2sdk::client::ragdoll_t, allowStretch) == 0x30);
        static_assert(offsetof(source2sdk::client::ragdoll_t, unused) == 0x31);
        
        static_assert(sizeof(source2sdk::client::ragdoll_t) == 0x38);
    };
};
