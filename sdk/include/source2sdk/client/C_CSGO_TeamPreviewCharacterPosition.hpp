#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_EconItemView.hpp"

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
        // Standard-layout class: false
        // Size: 0x1298
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_nVariant"
        // static metadata: MNetworkVarNames "int m_nRandom"
        // static metadata: MNetworkVarNames "int m_nOrdinal"
        // static metadata: MNetworkVarNames "CUtlString m_sWeaponName"
        // static metadata: MNetworkVarNames "XUID m_xuid"
        // static metadata: MNetworkVarNames "CEconItemView m_agentItem"
        // static metadata: MNetworkVarNames "CEconItemView m_glovesItem"
        // static metadata: MNetworkVarNames "CEconItemView m_weaponItem"
        #pragma pack(push, 1)
        class C_CSGO_TeamPreviewCharacterPosition : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nVariant; // 0x568            
            // metadata: MNetworkEnable
            std::int32_t m_nRandom; // 0x56c            
            // metadata: MNetworkEnable
            std::int32_t m_nOrdinal; // 0x570            
            uint8_t _pad0574[0x4]; // 0x574
            // metadata: MNetworkEnable
            CUtlString m_sWeaponName; // 0x578            
            // metadata: MNetworkEnable
            std::uint64_t m_xuid; // 0x580            
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_agentItem; // 0x588            
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_glovesItem; // 0x9d0            
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_weaponItem; // 0xe18            
            uint8_t _pad1260[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_TeamPreviewCharacterPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_TeamPreviewCharacterPosition) == 0x1298);
    };
};
