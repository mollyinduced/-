#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseToggle.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Size: 0xd38
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
        // static metadata: MNetworkVarNames "bool m_usable"
        // static metadata: MNetworkVarNames "string_t m_szDisplayText"
        #pragma pack(push, 1)
        class C_BaseButton : public source2sdk::client::C_BaseToggle
        {
        public:
            // metadata: MNetworkEnable
            // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseModelEntity> m_glowEntity;
            char m_glowEntity[0x4]; // 0xd28            
            // metadata: MNetworkEnable
            bool m_usable; // 0xd2c            
            uint8_t _pad0d2d[0x3]; // 0xd2d
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szDisplayText; // 0xd30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseButton) == 0xd38);
    };
};
