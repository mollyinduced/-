#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
        #pragma pack(push, 1)
        class CCSPlayer_PingServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            source2sdk::entity2::GameTime_t m_flPlayerPingTokens[5]; // 0x40            
            // metadata: MNetworkEnable
            // m_hPlayerPing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPlayerPing;
            char m_hPlayerPing[0x4]; // 0x54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_PingServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_PingServices) == 0x58);
    };
};
