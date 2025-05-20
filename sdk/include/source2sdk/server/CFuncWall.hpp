#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x798
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFuncWall : public source2sdk::server::CBaseModelEntity
        {
        public:
            std::int32_t m_nState; // 0x790            
            uint8_t _pad0794[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncWall) == 0x798);
    };
};
