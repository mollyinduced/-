#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "string_t m_worldName"
        // static metadata: MNetworkVarNames "string_t m_layerName"
        // static metadata: MNetworkVarNames "bool m_bWorldLayerVisible"
        // static metadata: MNetworkVarNames "bool m_bEntitiesSpawned"
        #pragma pack(push, 1)
        class CInfoWorldLayer : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x568            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_worldName; // 0x590            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_layerName; // 0x598            
            // metadata: MNetworkEnable
            bool m_bWorldLayerVisible; // 0x5a0            
            // metadata: MNetworkEnable
            bool m_bEntitiesSpawned; // 0x5a1            
            bool m_bCreateAsChildSpawnGroup; // 0x5a2            
            uint8_t _pad05a3[0x1]; // 0x5a3
            std::uint32_t m_hLayerSpawnGroup; // 0x5a4            
            bool m_bWorldLayerActuallyVisible; // 0x5a8            
            uint8_t _pad05a9[0x7];
            
            // Datamap fields:
            // void ShowWorldLayer; // 0x0
            // void HideWorldLayer; // 0x0
            // void SpawnEntities; // 0x0
            // void DestroyEntities; // 0x0
            // void ShowWorldLayerAndSpawnEntities; // 0x0
            // void HideWorldLayerAndDestroyEntities; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoWorldLayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoWorldLayer) == 0x5b0);
    };
};
