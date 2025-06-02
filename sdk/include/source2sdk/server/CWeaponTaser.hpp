#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBaseGun.hpp"

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
        // Size: 0xf90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_fFireTime"
        #pragma pack(push, 1)
        class CWeaponTaser : public source2sdk::server::CCSWeaponBaseGun
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fFireTime; // 0xf88            
            std::int32_t m_nLastAttackTick; // 0xf8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWeaponTaser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CWeaponTaser) == 0xf90);
    };
};
