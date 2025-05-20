#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

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
        // Size: 0xc48
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsIncGrenade"
        #pragma pack(push, 1)
        class CMolotovProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsIncGrenade; // 0xb50            
            uint8_t _pad0b51[0xb]; // 0xb51
            bool m_bDetonated; // 0xb5c            
            uint8_t _pad0b5d[0x3]; // 0xb5d
            source2sdk::server::IntervalTimer m_stillTimer; // 0xb60            
            uint8_t _pad0b70[0xd0]; // 0xb70
            bool m_bHasBouncedOffPlayer; // 0xc40            
            uint8_t _pad0c41[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMolotovProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMolotovProjectile) == 0xc48);
    };
};
