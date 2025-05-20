#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"
#include "source2sdk/server/shard_model_desc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd88
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_hModel"
        // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
        #pragma pack(push, 1)
        class CShatterGlassShardPhysics : public source2sdk::server::CPhysicsProp
        {
        public:
            bool m_bDebris; // 0xd00            
            uint8_t _pad0d01[0x3]; // 0xd01
            std::uint32_t m_hParentShard; // 0xd04            
            // metadata: MNetworkEnable
            source2sdk::server::shard_model_desc_t m_ShardDesc; // 0xd08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CShatterGlassShardPhysics) == 0xd88);
    };
};
