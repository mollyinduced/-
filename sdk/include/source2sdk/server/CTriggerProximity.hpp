#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CTriggerProximity : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMeasureTarget;
            char m_hMeasureTarget[0x4]; // 0x960            
            uint8_t _pad0964[0x4]; // 0x964
            CUtlSymbolLarge m_iszMeasureTarget; // 0x968            
            float m_fRadius; // 0x970            
            std::int32_t m_nTouchers; // 0x974            
            // m_NearestEntityDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_NearestEntityDistance;
            char m_NearestEntityDistance[0x28]; // 0x978            
            
            // Datamap fields:
            // void CTriggerProximityMeasureThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerProximity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerProximity) == 0x9a0);
    };
};
