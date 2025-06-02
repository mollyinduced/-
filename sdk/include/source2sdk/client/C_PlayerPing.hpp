#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayer"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPingedEntity"
        // static metadata: MNetworkVarNames "int m_iType"
        // static metadata: MNetworkVarNames "bool m_bUrgent"
        // static metadata: MNetworkVarNames "char m_szPlaceName"
        #pragma pack(push, 1)
        class C_PlayerPing : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x30]; // 0x568
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPlayer;
            char m_hPlayer[0x4]; // 0x598            
            // metadata: MNetworkEnable
            // m_hPingedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPingedEntity;
            char m_hPingedEntity[0x4]; // 0x59c            
            // metadata: MNetworkEnable
            std::int32_t m_iType; // 0x5a0            
            // metadata: MNetworkEnable
            bool m_bUrgent; // 0x5a4            
            // metadata: MNetworkEnable
            char m_szPlaceName[18]; // 0x5a5            
            uint8_t _pad05b7[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerPing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerPing) == 0x5b8);
    };
};
