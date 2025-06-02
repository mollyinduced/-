#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"

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
        // Size: 0xb78
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nDecoyShotTick"
        #pragma pack(push, 1)
        class CDecoyProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad0b50[0x8]; // 0xb50
            // metadata: MNetworkEnable
            std::int32_t m_nDecoyShotTick; // 0xb58            
            std::int32_t m_shotsRemaining; // 0xb5c            
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0xb60            
            uint8_t _pad0b64[0xc]; // 0xb64
            std::uint16_t m_decoyWeaponDefIndex; // 0xb70            
            uint8_t _pad0b72[0x6];
            
            // Datamap fields:
            // void CDecoyProjectileThink_Detonate; // 0x0
            // void CDecoyProjectileGunfireThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDecoyProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDecoyProjectile) == 0xb78);
    };
};
