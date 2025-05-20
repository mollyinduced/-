#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/SellbackPurchaseEntry_t.hpp"

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
        // Size: 0x138
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
        #pragma pack(push, 1)
        class CCSPlayer_BuyServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            uint8_t _pad0040[0x88]; // 0x40
            // metadata: MNetworkEnable
            // m_vecSellbackPurchaseEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::SellbackPurchaseEntry_t> m_vecSellbackPurchaseEntries;
            char m_vecSellbackPurchaseEntries[0x70]; // 0xc8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BuyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_BuyServices) == 0x138);
    };
};
