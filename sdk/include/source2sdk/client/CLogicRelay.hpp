#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::client::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnSpawn; // 0x590            
            bool m_bDisabled; // 0x5b8            
            bool m_bWaitForRefire; // 0x5b9            
            bool m_bTriggerOnce; // 0x5ba            
            bool m_bFastRetrigger; // 0x5bb            
            bool m_bPassthoughCaller; // 0x5bc            
            uint8_t _pad05bd[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputEnableRefire; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // void InputTrigger; // 0x0
            // void InputCancelPending; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CLogicRelay) == 0x5c0);
    };
};
