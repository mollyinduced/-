#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PhysicsProp.hpp"
#include "source2sdk/client/shard_model_desc_t.hpp"

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
        // Size: 0x11a0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_hModel"
        // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
        #pragma pack(push, 1)
        class C_ShatterGlassShardPhysics : public source2sdk::client::C_PhysicsProp
        {
        public:
            uint8_t _pad1118[0x8]; // 0x1118
            // metadata: MNetworkEnable
            source2sdk::client::shard_model_desc_t m_ShardDesc; // 0x1120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ShatterGlassShardPhysics) == 0x11a0);
    };
};
