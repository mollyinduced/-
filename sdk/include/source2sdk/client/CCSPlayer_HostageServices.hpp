#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x48
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostage"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCarriedHostageProp"
        #pragma pack(push, 1)
        class CCSPlayer_HostageServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // m_hCarriedHostage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCarriedHostage;
            char m_hCarriedHostage[0x4]; // 0x40            
            // metadata: MNetworkEnable
            // m_hCarriedHostageProp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCarriedHostageProp;
            char m_hCarriedHostageProp[0x4]; // 0x44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_HostageServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_HostageServices) == 0x48);
    };
};
