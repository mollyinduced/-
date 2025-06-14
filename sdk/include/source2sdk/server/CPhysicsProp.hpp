#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp_CrateType_t.hpp"

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
        // Size: 0xd00
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bAwake"
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0b58[0x8]; // 0xb58
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0xb60            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0xb88            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xbb0            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xbd8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xc00            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xc28            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xc50            
            bool m_bForceNavIgnore; // 0xc78            
            bool m_bNoNavmeshBlocker; // 0xc79            
            bool m_bForceNpcExclude; // 0xc7a            
            uint8_t _pad0c7b[0x1]; // 0xc7b
            float m_massScale; // 0xc7c            
            float m_inertiaScale; // 0xc80            
            float m_buoyancyScale; // 0xc84            
            std::int32_t m_damageType; // 0xc88            
            std::int32_t m_damageToEnableMotion; // 0xc8c            
            float m_flForceToEnableMotion; // 0xc90            
            bool m_bThrownByPlayer; // 0xc94            
            bool m_bDroppedByPlayer; // 0xc95            
            bool m_bTouchedByPlayer; // 0xc96            
            bool m_bFirstCollisionAfterLaunch; // 0xc97            
            std::int32_t m_iExploitableByPlayer; // 0xc98            
            bool m_bHasBeenAwakened; // 0xc9c            
            bool m_bIsOverrideProp; // 0xc9d            
            uint8_t _pad0c9e[0x2]; // 0xc9e
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xca0            
            std::int32_t m_iInitialGlowState; // 0xca4            
            std::int32_t m_nGlowRange; // 0xca8            
            std::int32_t m_nGlowRangeMin; // 0xcac            
            Color m_glowColor; // 0xcb0            
            bool m_bShouldAutoConvertBackFromDebris; // 0xcb4            
            bool m_bMuteImpactEffects; // 0xcb5            
            uint8_t _pad0cb6[0x9]; // 0xcb6
            bool m_bAcceptDamageFromHeldObjects; // 0xcbf            
            bool m_bEnableUseOutput; // 0xcc0            
            uint8_t _pad0cc1[0x3]; // 0xcc1
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xcc4            
            CUtlSymbolLarge m_strItemClass[4]; // 0xcc8            
            std::int32_t m_nItemCount[4]; // 0xce8            
            bool m_bRemovableForAmmoBalancing; // 0xcf8            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xcf9            
            uint8_t _pad0cfa[0x6];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputWake; // 0x0
            // bool InputSetAutoConvertBackFromDebris; // 0x0
            // void InputSleep; // 0x0
            // void InputDisableFloating; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // float InputSetMass; // 0x0
            // void InputEnableGravity; // 0x0
            // void InputDisableGravity; // 0x0
            // void InputEnableDrag; // 0x0
            // void InputDisableDrag; // 0x0
            // void InputEnableCollisions; // 0x0
            // void InputDisableCollisions; // 0x0
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // void CPhysicsPropClearFlagsThink; // 0x0
            // int32_t m_nNavObstacleType; // 0xcb8
            // bool m_bUpdateNavWhenMoving; // 0xcbc
            // bool m_bForceNavObstacleCut; // 0xcbd
            // bool m_bAllowObstacleConvexHullMerging; // 0xcbe
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xd00);
    };
};
