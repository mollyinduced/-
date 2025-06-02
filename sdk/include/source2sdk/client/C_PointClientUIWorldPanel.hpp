#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf90
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0d58[0x8]; // 0xd58
            bool m_bForceRecreateNextUpdate; // 0xd60            
            bool m_bMoveViewToPlayerNextThink; // 0xd61            
            bool m_bCheckCSSClasses; // 0xd62            
            uint8_t _pad0d63[0xd]; // 0xd63
            CTransform m_anchorDeltaTransform; // 0xd70            
            uint8_t _pad0d90[0x178]; // 0xd90
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xf08            
            uint8_t _pad0f10[0x20]; // 0xf10
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xf30            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xf31            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xf32            
            uint8_t _pad0f33[0x1]; // 0xf33
            // metadata: MNetworkEnable
            float m_flWidth; // 0xf34            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xf38            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xf3c            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xf40            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xf44            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xf48            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xf4c            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xf50            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xf54            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xf58            
            uint8_t _pad0f59[0x7]; // 0xf59
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xf60            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xf78            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xf79            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xf7a            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xf7b            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xf7c            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xf7d            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xf7e            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xf7f            
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xf80            
            uint8_t _pad0f84[0xc];
            
            // Datamap fields:
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xf00
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xf90);
    };
};
