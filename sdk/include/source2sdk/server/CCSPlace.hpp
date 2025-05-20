#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7a0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CCSPlace : public source2sdk::server::CServerOnlyModelEntity
        {
        public:
            uint8_t _pad0790[0x8]; // 0x790
            CUtlSymbolLarge m_name; // 0x798            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlace) == 0x7a0);
    };
};
