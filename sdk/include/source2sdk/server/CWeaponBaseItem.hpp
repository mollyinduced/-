#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf88
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
        // static metadata: MNetworkVarNames "bool m_bRedraw"
        #pragma pack(push, 1)
        class CWeaponBaseItem : public source2sdk::server::CCSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_SequenceCompleteTimer; // 0xf68            
            // metadata: MNetworkEnable
            bool m_bRedraw; // 0xf80            
            uint8_t _pad0f81[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWeaponBaseItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CWeaponBaseItem) == 0xf88);
    };
};
