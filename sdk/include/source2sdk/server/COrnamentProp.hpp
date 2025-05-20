#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

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
        // Size: 0xc60
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class COrnamentProp : public source2sdk::server::CDynamicProp
        {
        public:
            CUtlSymbolLarge m_initialOwner; // 0xc58            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetAttached; // 0x0
            // void InputDetach; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COrnamentProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::COrnamentProp) == 0xc60);
    };
};
