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
        // Size: 0x8
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MGapTypeQueriesForScopeSingleton
        #pragma pack(push, 1)
        class CClientGapTypeQueryRegistration
        {
        public:
            uint8_t _pad0000[0x8];
            // Static fields:
            static source2sdk::client::CClientGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<source2sdk::client::CClientGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CClientGapTypeQueryRegistration")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CClientGapTypeQueryRegistration) == 0x8);
    };
};
