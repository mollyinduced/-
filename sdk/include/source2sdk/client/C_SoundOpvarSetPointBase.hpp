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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x588
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "int m_iOpvarIndex"
        // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
        #pragma pack(push, 1)
        class C_SoundOpvarSetPointBase : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x568            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x570            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x578            
            // metadata: MNetworkEnable
            std::int32_t m_iOpvarIndex; // 0x580            
            // metadata: MNetworkEnable
            bool m_bUseAutoCompare; // 0x584            
            uint8_t _pad0585[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundOpvarSetPointBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundOpvarSetPointBase) == 0x588);
    };
};
