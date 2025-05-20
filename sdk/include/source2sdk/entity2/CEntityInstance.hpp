#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityIdentity;
    };
};
namespace source2sdk
{
    namespace entity2
    {
        struct CScriptComponent;
    };
};

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // 
        // static metadata: MNetworkVarNames "CEntityIdentity * m_pEntity"
        // static metadata: MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
        #pragma pack(push, 1)
        class CEntityInstance
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkDisable
            CUtlSymbolLarge m_iszPrivateVScripts; // 0x8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "56"
            source2sdk::entity2::CEntityIdentity* m_pEntity; // 0x10            
            uint8_t _pad0018[0x10]; // 0x18
            // metadata: MNetworkEnable
            // metadata: MNetworkDisable
            source2sdk::entity2::CScriptComponent* m_CScriptComponent; // 0x28            
            bool m_bVisibleinPVS; // 0x30            
            uint8_t _pad0031[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_iszPrivateVScripts) == 0x8);
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_pEntity) == 0x10);
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_CScriptComponent) == 0x28);
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_bVisibleinPVS) == 0x30);
        
        static_assert(sizeof(source2sdk::entity2::CEntityInstance) == 0x38);
    };
};
