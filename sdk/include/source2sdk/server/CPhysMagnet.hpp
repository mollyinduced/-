#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"

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
        // Size: 0xa38
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimGraph
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0x9a8            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0x9d0            
            float m_massScale; // 0x9f8            
            float m_forceLimit; // 0x9fc            
            float m_torqueLimit; // 0xa00            
            uint8_t _pad0a04[0x4]; // 0xa04
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0xa08            
            bool m_bActive; // 0xa20            
            bool m_bHasHitSomething; // 0xa21            
            uint8_t _pad0a22[0x2]; // 0xa22
            float m_flTotalMass; // 0xa24            
            float m_flRadius; // 0xa28            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0xa2c            
            std::int32_t m_iMaxObjectsAttached; // 0xa30            
            uint8_t _pad0a34[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0xa38);
    };
};
