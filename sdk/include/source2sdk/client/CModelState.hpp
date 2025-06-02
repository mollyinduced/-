#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Standard-layout class: true
        // Size: 0x230
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HModelStrong m_hModel"
        // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
        // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
        // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad0000[0xa0]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonModelChanged"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0xa0            
            // metadata: MNetworkDisable
            CUtlSymbolLarge m_ModelName; // 0xa8            
            uint8_t _pad00b0[0x38]; // 0xb0
            // metadata: MNetworkEnable
            bool m_bClientClothCreationSuppressed; // 0xe8            
            uint8_t _pad00e9[0xaf]; // 0xe9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
            std::uint64_t m_MeshGroupMask; // 0x198            
            uint8_t _pad01a0[0x7a]; // 0x1a0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
            std::int8_t m_nIdealMotionType; // 0x21a            
            // metadata: MNetworkDisable
            std::int8_t m_nForceLOD; // 0x21b            
            // metadata: MNetworkDisable
            std::int8_t m_nClothUpdateFlags; // 0x21c            
            uint8_t _pad021d[0x13];
            
            // Datamap fields:
            // void m_pVPhysicsAggregate; // 0xe0
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModelState, m_hModel) == 0xa0);
        static_assert(offsetof(source2sdk::client::CModelState, m_ModelName) == 0xa8);
        static_assert(offsetof(source2sdk::client::CModelState, m_bClientClothCreationSuppressed) == 0xe8);
        static_assert(offsetof(source2sdk::client::CModelState, m_MeshGroupMask) == 0x198);
        static_assert(offsetof(source2sdk::client::CModelState, m_nIdealMotionType) == 0x21a);
        static_assert(offsetof(source2sdk::client::CModelState, m_nForceLOD) == 0x21b);
        static_assert(offsetof(source2sdk::client::CModelState, m_nClothUpdateFlags) == 0x21c);
        
        static_assert(sizeof(source2sdk::client::CModelState) == 0x230);
    };
};
