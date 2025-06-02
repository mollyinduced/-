#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x110
        // Has VTable
        #pragma pack(push, 1)
        class CTakeDamageInfo
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector m_vecDamageForce; // 0x8            
            Vector m_vecDamagePosition; // 0x14            
            Vector m_vecReportedPosition; // 0x20            
            Vector m_vecDamageDirection; // 0x2c            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x38            
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x3c            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x40            
            float m_flDamage; // 0x44            
            float m_flTotalledDamage; // 0x48            
            float m_flTotalledDamageAbsorbed; // 0x4c            
            source2sdk::client::DamageTypes_t m_bitsDamageType; // 0x50            
            std::int32_t m_iDamageCustom; // 0x54            
            source2sdk::client::AmmoIndex_t m_iAmmoType; // 0x58            
            uint8_t _pad0059[0xf]; // 0x59
            float m_flOriginalDamage; // 0x68            
            bool m_bShouldBleed; // 0x6c            
            bool m_bShouldSpark; // 0x6d            
            uint8_t _pad006e[0x2]; // 0x6e
            float m_flDamageAbsorbed; // 0x70            
            uint8_t _pad0074[0xc]; // 0x74
            source2sdk::client::TakeDamageFlags_t m_nDamageFlags; // 0x80            
            std::int32_t m_nNumObjectsPenetrated; // 0x88            
            float m_flFriendlyFireDamageReductionRatio; // 0x8c            
            uint8_t _pad0090[0x58]; // 0x90
            HSCRIPT m_hScriptInstance; // 0xe8            
            uint8_t _pad00f0[0x14]; // 0xf0
            bool m_bInTakeDamageFlow; // 0x104            
            uint8_t _pad0105[0xb];
            
            // Static fields:
            static source2sdk::client::CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<source2sdk::client::CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->GetStaticFields()[0]->m_pInstance);};
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageForce) == 0x8);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamagePosition) == 0x14);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecReportedPosition) == 0x20);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageDirection) == 0x2c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hInflictor) == 0x38);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAttacker) == 0x3c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAbility) == 0x40);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flDamage) == 0x44);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flTotalledDamage) == 0x48);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flTotalledDamageAbsorbed) == 0x4c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bitsDamageType) == 0x50);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iDamageCustom) == 0x54);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iAmmoType) == 0x58);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flOriginalDamage) == 0x68);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldBleed) == 0x6c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldSpark) == 0x6d);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flDamageAbsorbed) == 0x70);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDamageFlags) == 0x80);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nNumObjectsPenetrated) == 0x88);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flFriendlyFireDamageReductionRatio) == 0x8c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hScriptInstance) == 0xe8);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bInTakeDamageFlow) == 0x104);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageInfo) == 0x110);
    };
};
