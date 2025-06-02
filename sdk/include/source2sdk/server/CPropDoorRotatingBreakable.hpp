#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPropDoorRotating.hpp"

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
        // Size: 0xfa0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPropDoorRotatingBreakable : public source2sdk::server::CPropDoorRotating
        {
        public:
            bool m_bBreakable; // 0xf80            
            bool m_isAbleToCloseAreaPortals; // 0xf81            
            uint8_t _pad0f82[0x2]; // 0xf82
            std::int32_t m_currentDamageState; // 0xf84            
            // m_damageStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_damageStates;
            char m_damageStates[0x18]; // 0xf88            
            
            // Datamap fields:
            // void InputSetUnbreakable; // 0x0
            // void InputSetBreakable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotatingBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotatingBreakable) == 0xfa0);
    };
};
