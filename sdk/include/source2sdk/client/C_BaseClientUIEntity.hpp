#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xd58
        // Has VTable
        // Is Abstract
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class C_BaseClientUIEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0d28[0x8]; // 0xd28
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xd30            
            uint8_t _pad0d31[0x7]; // 0xd31
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0xd38            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0xd40            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0xd48            
            uint8_t _pad0d50[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseClientUIEntity) == 0xd58);
    };
};
