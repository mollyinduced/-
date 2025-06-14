#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CEnvGlobal : public source2sdk::server::CLogicalEntity
        {
        public:
            // m_outCounter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_outCounter;
            char m_outCounter[0x28]; // 0x4e0            
            CUtlSymbolLarge m_globalstate; // 0x508            
            std::int32_t m_triggermode; // 0x510            
            std::int32_t m_initialstate; // 0x514            
            std::int32_t m_counter; // 0x518            
            uint8_t _pad051c[0x4];
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputRemove; // 0x0
            // void InputToggle; // 0x0
            // int32_t InputSetCounter; // 0x0
            // int32_t InputAddToCounter; // 0x0
            // void InputGetCounter; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvGlobal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvGlobal) == 0x520);
    };
};
