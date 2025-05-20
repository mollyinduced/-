#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/SellbackPurchaseEntry_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
        #pragma pack(push, 1)
        class CCSPlayer_BuyServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // m_vecSellbackPurchaseEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::SellbackPurchaseEntry_t> m_vecSellbackPurchaseEntries;
            char m_vecSellbackPurchaseEntries[0x50]; // 0x40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BuyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_BuyServices) == 0x90);
    };
};
