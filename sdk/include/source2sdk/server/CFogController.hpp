#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/fogparams_t.hpp"

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
        // Size: 0x550
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "fogparams_t m_fog"
        #pragma pack(push, 1)
        class CFogController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::fogparams_t m_fog; // 0x4e0            
            bool m_bUseAngles; // 0x548            
            uint8_t _pad0549[0x3]; // 0x549
            std::int32_t m_iChangedVariables; // 0x54c            
            
            // Datamap fields:
            // float InputSetStartDist; // 0x0
            // float InputSetEndDist; // 0x0
            // float InputSetMaxDensity; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // Color InputSetColor; // 0x0
            // Color InputSetColorSecondary; // 0x0
            // int32_t InputSetFarZ; // 0x0
            // CUtlSymbolLarge InputSetAngles; // 0x0
            // float InputSet2DSkyboxFogFactor; // 0x0
            // Color InputSetColorLerpTo; // 0x0
            // Color InputSetColorSecondaryLerpTo; // 0x0
            // float InputSetStartDistLerpTo; // 0x0
            // float InputSetEndDistLerpTo; // 0x0
            // float InputSetMaxDensityLerpTo; // 0x0
            // float InputSet2DSkyboxFogFactorLerpTo; // 0x0
            // void InputStartFogTransition; // 0x0
            // void CFogControllerSetLerpValues; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogController) == 0x550);
    };
};
