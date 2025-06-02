#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Item.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Size: 0x1770
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
        // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
        #pragma pack(push, 1)
        class C_ItemDogtags : public source2sdk::client::C_Item
        {
        public:
            // metadata: MNetworkEnable
            // m_OwningPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_OwningPlayer;
            char m_OwningPlayer[0x4]; // 0x1768            
            // metadata: MNetworkEnable
            // m_KillingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_KillingPlayer;
            char m_KillingPlayer[0x4]; // 0x176c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ItemDogtags because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ItemDogtags) == 0x1770);
    };
};
