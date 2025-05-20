#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x1c0
        // Has VTable
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CNetworkTransmitComponent
        {
        public:
            uint8_t _pad0000[0x184]; // 0x0
            std::uint8_t m_nTransmitStateOwnedCounter; // 0x184            
            uint8_t _pad0185[0x3b];
            
            // Static fields:
            static std::int32_t &Get_s_nDebugStateChange(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[0]->m_pInstance);};
            static std::int32_t &Get_s_nWatchTransmitEntity(){return *reinterpret_cast<std::int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[1]->m_pInstance);};
            static bool &Get_s_bUseNetworkVars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[2]->m_pInstance);};
            static bool &Get_s_bNetworkVarPerFieldTracking(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[3]->m_pInstance);};
            static bool &Get_s_bNetworkVarValidate(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[4]->m_pInstance);};
            static bool &Get_s_bUsingPVSConvars(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->GetStaticFields()[5]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkTransmitComponent, m_nTransmitStateOwnedCounter) == 0x184);
        
        static_assert(sizeof(source2sdk::client::CNetworkTransmitComponent) == 0x1c0);
    };
};
