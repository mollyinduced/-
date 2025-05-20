#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct CTakeDamageInfo;
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
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CTakeDamageResult
        {
        public:
            source2sdk::client::CTakeDamageInfo* m_pOriginatingInfo; // 0x0            
            std::int32_t m_nHealthLost; // 0x8            
            std::int32_t m_nDamageTaken; // 0xc            
            std::int32_t m_nTotalledHealthLost; // 0x10            
            std::int32_t m_nTotalledDamageTaken; // 0x14            
            float m_flTotalledDamageAbsorbed; // 0x18            
            uint8_t _pad001c[0x4];
            
            // Static fields:
            static source2sdk::client::CTakeDamageResult &Get_EmptyResult(){return *reinterpret_cast<source2sdk::client::CTakeDamageResult*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageResult")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_pOriginatingInfo) == 0x0);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthLost) == 0x8);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nDamageTaken) == 0xc);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledHealthLost) == 0x10);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledDamageTaken) == 0x14);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flTotalledDamageAbsorbed) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageResult) == 0x20);
    };
};
