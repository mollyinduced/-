#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
        // Size: 0x8d0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CFuncShatterglass : public source2sdk::server::CBaseModelEntity
        {
        public:
            matrix3x4_t m_matPanelTransform; // 0x790            
            matrix3x4_t m_matPanelTransformWsTemp; // 0x7c0            
            // m_vecShatterGlassShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecShatterGlassShards;
            char m_vecShatterGlassShards[0x18]; // 0x7f0            
            Vector2D m_PanelSize; // 0x808            
            source2sdk::entity2::GameTime_t m_flLastShatterSoundEmitTime; // 0x810            
            source2sdk::entity2::GameTime_t m_flLastCleanupTime; // 0x814            
            source2sdk::entity2::GameTime_t m_flInitAtTime; // 0x818            
            float m_flGlassThickness; // 0x81c            
            float m_flSpawnInvulnerability; // 0x820            
            bool m_bBreakSilent; // 0x824            
            bool m_bBreakShardless; // 0x825            
            bool m_bBroken; // 0x826            
            bool m_bGlassNavIgnore; // 0x827            
            bool m_bGlassInFrame; // 0x828            
            bool m_bStartBroken; // 0x829            
            std::uint8_t m_iInitialDamageType; // 0x82a            
            uint8_t _pad082b[0x5]; // 0x82b
            CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x830            
            CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x838            
            CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x840            
            CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x848            
            // m_vInitialDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vInitialDamagePositions;
            char m_vInitialDamagePositions[0x18]; // 0x850            
            // m_vExtraDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vExtraDamagePositions;
            char m_vExtraDamagePositions[0x18]; // 0x868            
            // m_vInitialPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector4D> m_vInitialPanelVertices;
            char m_vInitialPanelVertices[0x18]; // 0x880            
            source2sdk::entity2::CEntityIOOutput m_OnBroken; // 0x898            
            std::uint8_t m_iSurfaceType; // 0x8c0            
            uint8_t _pad08c1[0x7]; // 0x8c1
            // m_hMaterialDamageBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialDamageBase;
            char m_hMaterialDamageBase[0x8]; // 0x8c8            
            
            // Datamap fields:
            // void CFuncShatterglassGlassThink; // 0x0
            // void InputHit; // 0x0
            // void InputShatter; // 0x0
            // void InputRestore; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncShatterglass because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncShatterglass) == 0x8d0);
    };
};
