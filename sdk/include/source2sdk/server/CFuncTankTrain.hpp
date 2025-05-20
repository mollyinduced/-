#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CFuncTrackTrain.hpp"

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
        // Size: 0x908
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFuncTankTrain : public source2sdk::server::CFuncTrackTrain
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0x8e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTankTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTankTrain) == 0x908);
    };
};
