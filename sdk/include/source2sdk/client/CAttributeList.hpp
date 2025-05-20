#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEconItemAttribute.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CAttributeManager;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x60
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CEconItemAttribute m_Attributes"
        #pragma pack(push, 1)
        class CAttributeList
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
            // m_Attributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CEconItemAttribute> m_Attributes;
            char m_Attributes[0x50]; // 0x8            
            source2sdk::client::CAttributeManager* m_pManager; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAttributeList, m_Attributes) == 0x8);
        static_assert(offsetof(source2sdk::client::CAttributeList, m_pManager) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CAttributeList) == 0x60);
    };
};
