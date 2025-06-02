#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x590
        // Has VTable
        // Is Abstract
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "string_t m_iszSoundAreaType"
        // static metadata: MNetworkVarNames "Vector m_vPos"
        #pragma pack(push, 1)
        class C_SoundAreaEntityBase : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x568            
            uint8_t _pad0569[0x7]; // 0x569
            bool m_bWasEnabled; // 0x570            
            uint8_t _pad0571[0x7]; // 0x571
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundAreaType; // 0x578            
            // metadata: MNetworkEnable
            Vector m_vPos; // 0x580            
            uint8_t _pad058c[0x4];
            
            // Datamap fields:
            // void m_nGUID; // 0x56c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntityBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntityBase) == 0x590);
    };
};
