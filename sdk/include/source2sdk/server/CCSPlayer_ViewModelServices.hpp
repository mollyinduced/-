#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPlayer_ViewModelServices.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseViewModel;
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
        // Size: 0x50
        // Has VTable
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseViewModel > m_hViewModel"
        #pragma pack(push, 1)
        class CCSPlayer_ViewModelServices : public source2sdk::server::CPlayer_ViewModelServices
        {
        public:
            // metadata: MNetworkEnable
            // m_hViewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseViewModel> m_hViewModel[3];
            char m_hViewModel[0xc]; // 0x40            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_ViewModelServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_ViewModelServices) == 0x50);
    };
};
