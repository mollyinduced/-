#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x940
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class CBaseClientUIEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x790            
            uint8_t _pad0791[0x7]; // 0x791
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x798            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x7a0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x7a8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput0; // 0x7b0            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput1; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput2; // 0x800            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput3; // 0x828            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput4; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput5; // 0x878            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput6; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput7; // 0x8c8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput8; // 0x8f0            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput9; // 0x918            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseClientUIEntity) == 0x940);
    };
};
