#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xd70
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkOverride "m_fFlags C_BaseEntity"
        // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
        // static metadata: MNetworkVarNames "float32 m_flTargetSpeed"
        // static metadata: MNetworkVarNames "GameTick_t m_nTransitionStartTick"
        // static metadata: MNetworkVarNames "int m_nTransitionDurationTicks"
        // static metadata: MNetworkVarNames "float32 m_flTransitionStartSpeed"
        // static metadata: MNetworkVarNames "EHANDLE m_hConveyorModels"
        #pragma pack(push, 1)
        class C_FuncConveyor : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0d28[0x8]; // 0xd28
            // metadata: MNetworkEnable
            Vector m_vecMoveDirEntitySpace; // 0xd30            
            // metadata: MNetworkEnable
            float m_flTargetSpeed; // 0xd3c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nTransitionStartTick; // 0xd40            
            // metadata: MNetworkEnable
            std::int32_t m_nTransitionDurationTicks; // 0xd44            
            // metadata: MNetworkEnable
            float m_flTransitionStartSpeed; // 0xd48            
            uint8_t _pad0d4c[0x4]; // 0xd4c
            // metadata: MNetworkEnable
            // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hConveyorModels;
            char m_hConveyorModels[0x18]; // 0xd50            
            float m_flCurrentConveyorOffset; // 0xd68            
            float m_flCurrentConveyorSpeed; // 0xd6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncConveyor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncConveyor) == 0xd70);
    };
};
