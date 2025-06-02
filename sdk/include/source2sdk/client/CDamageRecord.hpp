#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EKillTypes_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Size: 0x70
        // 
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerDamager"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_PlayerRecipient"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerDamager"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController > m_hPlayerControllerRecipient"
        // static metadata: MNetworkVarNames "CUtlString m_szPlayerDamagerName"
        // static metadata: MNetworkVarNames "CUtlString m_szPlayerRecipientName"
        // static metadata: MNetworkVarNames "uint64 m_DamagerXuid"
        // static metadata: MNetworkVarNames "uint64 m_RecipientXuid"
        // static metadata: MNetworkVarNames "int m_iDamage"
        // static metadata: MNetworkVarNames "int m_iActualHealthRemoved"
        // static metadata: MNetworkVarNames "int m_iNumHits"
        // static metadata: MNetworkVarNames "int m_iLastBulletUpdate"
        // static metadata: MNetworkVarNames "bool m_bIsOtherEnemy"
        // static metadata: MNetworkVarNames "EKillTypes_t m_killType"
        #pragma pack(push, 1)
        class CDamageRecord
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            // metadata: MNetworkEnable
            // m_PlayerDamager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_PlayerDamager;
            char m_PlayerDamager[0x4]; // 0x28            
            // metadata: MNetworkEnable
            // m_PlayerRecipient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_PlayerRecipient;
            char m_PlayerRecipient[0x4]; // 0x2c            
            // metadata: MNetworkEnable
            // m_hPlayerControllerDamager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hPlayerControllerDamager;
            char m_hPlayerControllerDamager[0x4]; // 0x30            
            // metadata: MNetworkEnable
            // m_hPlayerControllerRecipient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hPlayerControllerRecipient;
            char m_hPlayerControllerRecipient[0x4]; // 0x34            
            // metadata: MNetworkEnable
            CUtlString m_szPlayerDamagerName; // 0x38            
            // metadata: MNetworkEnable
            CUtlString m_szPlayerRecipientName; // 0x40            
            // metadata: MNetworkEnable
            std::uint64_t m_DamagerXuid; // 0x48            
            // metadata: MNetworkEnable
            std::uint64_t m_RecipientXuid; // 0x50            
            std::int32_t m_iBulletsDamage; // 0x58            
            // metadata: MNetworkEnable
            std::int32_t m_iDamage; // 0x5c            
            // metadata: MNetworkEnable
            std::int32_t m_iActualHealthRemoved; // 0x60            
            // metadata: MNetworkEnable
            std::int32_t m_iNumHits; // 0x64            
            // metadata: MNetworkEnable
            std::int32_t m_iLastBulletUpdate; // 0x68            
            // metadata: MNetworkEnable
            bool m_bIsOtherEnemy; // 0x6c            
            // metadata: MNetworkEnable
            source2sdk::client::EKillTypes_t m_killType; // 0x6d            
            uint8_t _pad006e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_PlayerDamager) == 0x28);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_PlayerRecipient) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_hPlayerControllerDamager) == 0x30);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_hPlayerControllerRecipient) == 0x34);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_szPlayerDamagerName) == 0x38);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_szPlayerRecipientName) == 0x40);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_DamagerXuid) == 0x48);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_RecipientXuid) == 0x50);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iBulletsDamage) == 0x58);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iDamage) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iActualHealthRemoved) == 0x60);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iNumHits) == 0x64);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iLastBulletUpdate) == 0x68);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_bIsOtherEnemy) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_killType) == 0x6d);
        
        static_assert(sizeof(source2sdk::client::CDamageRecord) == 0x70);
    };
};
