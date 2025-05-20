#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CItemGenericTriggerHelper;
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
        // Size: 0xbf0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0a80[0x8]; // 0xa80
            bool m_bHasTriggerRadius; // 0xa88            
            bool m_bHasPickupRadius; // 0xa89            
            uint8_t _pad0a8a[0x2]; // 0xa8a
            float m_flPickupRadiusSqr; // 0xa8c            
            float m_flTriggerRadiusSqr; // 0xa90            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0xa94            
            bool m_bPlayerCounterListenerAdded; // 0xa98            
            bool m_bPlayerInTriggerRadius; // 0xa99            
            uint8_t _pad0a9a[0x6]; // 0xa9a
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0xaa0            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaa8            
            bool m_bAutoStartAmbientSound; // 0xab0            
            uint8_t _pad0ab1[0x7]; // 0xab1
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0xab8            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0xac0            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0xac8            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0xad0            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0xad8            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xae0            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xae8            
            CUtlSymbolLarge m_pPickupFilterName; // 0xaf0            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0xaf8            
            uint8_t _pad0afc[0x4]; // 0xafc
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0xb00            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0xb28            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb50            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb78            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xba0            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc8            
            float m_flPickupRadius; // 0xbd0            
            float m_flTriggerRadius; // 0xbd4            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd8            
            bool m_bGlowWhenInTrigger; // 0xbe0            
            Color m_glowColor; // 0xbe1            
            bool m_bUseable; // 0xbe5            
            uint8_t _pad0be6[0x2]; // 0xbe6
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xbe8            
            uint8_t _pad0bec[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0xa80
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xbf0);
    };
};
