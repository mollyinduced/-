#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CFiringModeFloat.hpp"
#include "source2sdk/client/CFiringModeInt.hpp"
#include "source2sdk/client/CSWeaponCategory.hpp"
#include "source2sdk/client/CSWeaponSilencerType.hpp"
#include "source2sdk/client/CSWeaponType.hpp"
#include "source2sdk/client/gear_slot_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBasePlayerWeaponVData.hpp"

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
        // Size: 0xec0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCSWeaponBaseVData : public source2sdk::server::CBasePlayerWeaponVData
        {
        public:
            source2sdk::client::CSWeaponType m_WeaponType; // 0x348            
            source2sdk::client::CSWeaponCategory m_WeaponCategory; // 0x34c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_szViewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szViewModel;
            char m_szViewModel[0xe0]; // 0x350            
            // m_szPlayerModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szPlayerModel;
            char m_szPlayerModel[0xe0]; // 0x430            
            // m_szWorldDroppedModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szWorldDroppedModel;
            char m_szWorldDroppedModel[0xe0]; // 0x510            
            // m_szAimsightLensMaskModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szAimsightLensMaskModel;
            char m_szAimsightLensMaskModel[0xe0]; // 0x5f0            
            // m_szMagazineModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szMagazineModel;
            char m_szMagazineModel[0xe0]; // 0x6d0            
            // m_szHeatEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szHeatEffect;
            char m_szHeatEffect[0xe0]; // 0x7b0            
            // m_szEjectBrassEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szEjectBrassEffect;
            char m_szEjectBrassEffect[0xe0]; // 0x890            
            // m_szMuzzleFlashParticleAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticleAlt;
            char m_szMuzzleFlashParticleAlt[0xe0]; // 0x970            
            // m_szMuzzleFlashThirdPersonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticle;
            char m_szMuzzleFlashThirdPersonParticle[0xe0]; // 0xa50            
            // m_szMuzzleFlashThirdPersonParticleAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticleAlt;
            char m_szMuzzleFlashThirdPersonParticleAlt[0xe0]; // 0xb30            
            // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon"
            // m_szTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szTracerParticle;
            char m_szTracerParticle[0xe0]; // 0xc10            
            // metadata: MPropertyStartGroup "HUD Positions"
            // metadata: MPropertyFriendlyName "HUD Bucket"
            // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
            source2sdk::client::gear_slot_t m_GearSlot; // 0xcf0            
            std::int32_t m_GearSlotPosition; // 0xcf4            
            // metadata: MPropertyFriendlyName "HUD Bucket Position"
            // metadata: MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
            source2sdk::client::loadout_slot_t m_DefaultLoadoutSlot; // 0xcf8            
            uint8_t _pad0cfc[0x4]; // 0xcfc
            CUtlString m_sWrongTeamMsg; // 0xd00            
            // metadata: MPropertyStartGroup "In-Game Data"
            std::int32_t m_nPrice; // 0xd08            
            std::int32_t m_nKillAward; // 0xd0c            
            std::int32_t m_nPrimaryReserveAmmoMax; // 0xd10            
            std::int32_t m_nSecondaryReserveAmmoMax; // 0xd14            
            bool m_bMeleeWeapon; // 0xd18            
            bool m_bHasBurstMode; // 0xd19            
            bool m_bIsRevolver; // 0xd1a            
            bool m_bCannotShootUnderwater; // 0xd1b            
            uint8_t _pad0d1c[0x4]; // 0xd1c
            // metadata: MPropertyFriendlyName "In-Code weapon name"
            CGlobalSymbol m_szName; // 0xd20            
            // metadata: MPropertyFriendlyName "Player Animation Extension"
            CUtlString m_szAnimExtension; // 0xd28            
            source2sdk::client::CSWeaponSilencerType m_eSilencerType; // 0xd30            
            std::int32_t m_nCrosshairMinDistance; // 0xd34            
            std::int32_t m_nCrosshairDeltaDistance; // 0xd38            
            bool m_bIsFullAuto; // 0xd3c            
            uint8_t _pad0d3d[0x3]; // 0xd3d
            std::int32_t m_nNumBullets; // 0xd40            
            // metadata: MPropertyStartGroup "Firing Mode Data"
            source2sdk::client::CFiringModeFloat m_flCycleTime; // 0xd44            
            source2sdk::client::CFiringModeFloat m_flMaxSpeed; // 0xd4c            
            source2sdk::client::CFiringModeFloat m_flSpread; // 0xd54            
            source2sdk::client::CFiringModeFloat m_flInaccuracyCrouch; // 0xd5c            
            source2sdk::client::CFiringModeFloat m_flInaccuracyStand; // 0xd64            
            source2sdk::client::CFiringModeFloat m_flInaccuracyJump; // 0xd6c            
            source2sdk::client::CFiringModeFloat m_flInaccuracyLand; // 0xd74            
            source2sdk::client::CFiringModeFloat m_flInaccuracyLadder; // 0xd7c            
            source2sdk::client::CFiringModeFloat m_flInaccuracyFire; // 0xd84            
            source2sdk::client::CFiringModeFloat m_flInaccuracyMove; // 0xd8c            
            source2sdk::client::CFiringModeFloat m_flRecoilAngle; // 0xd94            
            source2sdk::client::CFiringModeFloat m_flRecoilAngleVariance; // 0xd9c            
            source2sdk::client::CFiringModeFloat m_flRecoilMagnitude; // 0xda4            
            source2sdk::client::CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xdac            
            source2sdk::client::CFiringModeInt m_nTracerFrequency; // 0xdb4            
            float m_flInaccuracyJumpInitial; // 0xdbc            
            float m_flInaccuracyJumpApex; // 0xdc0            
            float m_flInaccuracyReload; // 0xdc4            
            // metadata: MPropertyStartGroup "Firing"
            std::int32_t m_nRecoilSeed; // 0xdc8            
            std::int32_t m_nSpreadSeed; // 0xdcc            
            float m_flTimeToIdleAfterFire; // 0xdd0            
            float m_flIdleInterval; // 0xdd4            
            float m_flAttackMovespeedFactor; // 0xdd8            
            float m_flHeatPerShot; // 0xddc            
            float m_flInaccuracyPitchShift; // 0xde0            
            float m_flInaccuracyAltSoundThreshold; // 0xde4            
            float m_flBotAudibleRange; // 0xde8            
            uint8_t _pad0dec[0x4]; // 0xdec
            CUtlString m_szUseRadioSubtitle; // 0xdf0            
            // metadata: MPropertyStartGroup "Zooming"
            bool m_bUnzoomsAfterShot; // 0xdf8            
            bool m_bHideViewModelWhenZoomed; // 0xdf9            
            uint8_t _pad0dfa[0x2]; // 0xdfa
            std::int32_t m_nZoomLevels; // 0xdfc            
            std::int32_t m_nZoomFOV1; // 0xe00            
            std::int32_t m_nZoomFOV2; // 0xe04            
            float m_flZoomTime0; // 0xe08            
            float m_flZoomTime1; // 0xe0c            
            float m_flZoomTime2; // 0xe10            
            // metadata: MPropertyStartGroup "Iron Sights"
            float m_flIronSightPullUpSpeed; // 0xe14            
            float m_flIronSightPutDownSpeed; // 0xe18            
            float m_flIronSightFOV; // 0xe1c            
            float m_flIronSightPivotForward; // 0xe20            
            float m_flIronSightLooseness; // 0xe24            
            QAngle m_angPivotAngle; // 0xe28            
            Vector m_vecIronSightEyePos; // 0xe34            
            // metadata: MPropertyStartGroup "Damage"
            std::int32_t m_nDamage; // 0xe40            
            float m_flHeadshotMultiplier; // 0xe44            
            float m_flArmorRatio; // 0xe48            
            float m_flPenetration; // 0xe4c            
            float m_flRange; // 0xe50            
            float m_flRangeModifier; // 0xe54            
            float m_flFlinchVelocityModifierLarge; // 0xe58            
            float m_flFlinchVelocityModifierSmall; // 0xe5c            
            // metadata: MPropertyStartGroup "Recovery"
            float m_flRecoveryTimeCrouch; // 0xe60            
            float m_flRecoveryTimeStand; // 0xe64            
            float m_flRecoveryTimeCrouchFinal; // 0xe68            
            float m_flRecoveryTimeStandFinal; // 0xe6c            
            std::int32_t m_nRecoveryTransitionStartBullet; // 0xe70            
            std::int32_t m_nRecoveryTransitionEndBullet; // 0xe74            
            // metadata: MPropertyStartGroup "Grenade Data"
            float m_flThrowVelocity; // 0xe78            
            Vector m_vSmokeColor; // 0xe7c            
            CGlobalSymbol m_szAnimClass; // 0xe88            
            uint8_t _pad0e90[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBaseVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBaseVData) == 0xec0);
    };
};
