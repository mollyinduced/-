#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/CSWeaponState_t.hpp"
#include "source2sdk/client/C_BasePlayerWeapon.hpp"
#include "source2sdk/client/C_IronSightController.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/client/WeaponAttackType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b20
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_flTimeWeaponIdle"
        // static metadata: MNetworkVarNames "float m_flFireSequenceStartTime"
        // static metadata: MNetworkVarNames "int m_nFireSequenceStartTimeChange"
        // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
        // static metadata: MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
        // static metadata: MNetworkVarNames "CSWeaponState_t m_iState"
        // static metadata: MNetworkVarNames "uint32 m_nViewModelIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
        // static metadata: MNetworkVarNames "CSWeaponMode m_weaponMode"
        // static metadata: MNetworkVarNames "float m_fAccuracyPenalty"
        // static metadata: MNetworkVarNames "int m_iRecoilIndex"
        // static metadata: MNetworkVarNames "float m_flRecoilIndex"
        // static metadata: MNetworkVarNames "bool m_bBurstMode"
        // static metadata: MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
        // static metadata: MNetworkVarNames "float m_flPostponeFireReadyFrac"
        // static metadata: MNetworkVarNames "bool m_bInReload"
        // static metadata: MNetworkVarNames "bool m_bReloadVisuallyComplete"
        // static metadata: MNetworkVarNames "GameTime_t m_flDroppedAtTime"
        // static metadata: MNetworkVarNames "bool m_bIsHauledBack"
        // static metadata: MNetworkVarNames "bool m_bSilencerOn"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
        // static metadata: MNetworkVarNames "int m_iOriginalTeamNumber"
        // static metadata: MNetworkVarNames "int m_iMostRecentTeamNumber"
        // static metadata: MNetworkVarNames "bool m_bDroppedNearBuyZone"
        // static metadata: MNetworkVarNames "GameTime_t m_nextPrevOwnerUseTime"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
        // static metadata: MNetworkVarNames "GameTick_t m_nDropTick"
        // static metadata: MNetworkVarNames "GameTime_t m_fLastShotTime"
        // static metadata: MNetworkVarNames "int m_iIronSightMode"
        // static metadata: MNetworkVarNames "int m_iNumEmptyAttacks"
        #pragma pack(push, 1)
        class C_CSWeaponBase : public source2sdk::client::C_BasePlayerWeapon
        {
        public:
            uint8_t _pad16a0[0x3c]; // 0x16a0
            // metadata: MNetworkEnable
            float m_flFireSequenceStartTime; // 0x16dc            
            // metadata: MNetworkEnable
            std::int32_t m_nFireSequenceStartTimeChange; // 0x16e0            
            std::int32_t m_nFireSequenceStartTimeAck; // 0x16e4            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerAnimEvent_t m_ePlayerFireEvent; // 0x16e8            
            // metadata: MNetworkEnable
            source2sdk::client::WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x16ec            
            source2sdk::animationsystem::HSequence m_seqIdle; // 0x16f0            
            source2sdk::animationsystem::HSequence m_seqFirePrimary; // 0x16f4            
            source2sdk::animationsystem::HSequence m_seqFireSecondary; // 0x16f8            
            uint8_t _pad16fc[0x4]; // 0x16fc
            // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::HSequence> m_thirdPersonFireSequences;
            char m_thirdPersonFireSequences[0x18]; // 0x1700            
            source2sdk::animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0x1718            
            std::int32_t m_nSilencerBoneIndex; // 0x171c            
            source2sdk::animationsystem::HSequence m_thirdPersonSequences[7]; // 0x1720            
            uint8_t _pad173c[0x1c]; // 0x173c
            source2sdk::client::CSWeaponState_t m_ClientPreviousWeaponState; // 0x1758            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponStateNetworkChange"
            source2sdk::client::CSWeaponState_t m_iState; // 0x175c            
            float m_flCrosshairDistance; // 0x1760            
            std::int32_t m_iAmmoLastCheck; // 0x1764            
            std::int32_t m_iAlpha; // 0x1768            
            std::int32_t m_iScopeTextureID; // 0x176c            
            std::int32_t m_iCrosshairTextureID; // 0x1770            
            float m_flGunAccuracyPositionDeprecated; // 0x1774            
            std::int32_t m_nLastEmptySoundCmdNum; // 0x1778            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::uint32_t m_nViewModelIndex; // 0x177c            
            bool m_bReloadsWithClips; // 0x1780            
            uint8_t _pad1781[0x3]; // 0x1781
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flTimeWeaponIdle; // 0x1784            
            bool m_bFireOnEmpty; // 0x1788            
            uint8_t _pad1789[0x7]; // 0x1789
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x1790            
            // metadata: MNetworkEnable
            source2sdk::client::CSWeaponMode m_weaponMode; // 0x17b8            
            float m_flTurningInaccuracyDelta; // 0x17bc            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0x17c0            
            float m_flTurningInaccuracy; // 0x17cc            
            // metadata: MNetworkEnable
            float m_fAccuracyPenalty; // 0x17d0            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0x17d4            
            float m_fAccuracySmoothedForZoom; // 0x17d8            
            source2sdk::entity2::GameTime_t m_fScopeZoomEndTime; // 0x17dc            
            // metadata: MNetworkEnable
            std::int32_t m_iRecoilIndex; // 0x17e0            
            // metadata: MNetworkEnable
            float m_flRecoilIndex; // 0x17e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
            bool m_bBurstMode; // 0x17e8            
            uint8_t _pad17e9[0x3]; // 0x17e9
            source2sdk::entity2::GameTime_t m_flLastBurstModeChangeTime; // 0x17ec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0x17f0            
            // metadata: MNetworkEnable
            float m_flPostponeFireReadyFrac; // 0x17f4            
            // metadata: MNetworkEnable
            bool m_bInReload; // 0x17f8            
            // metadata: MNetworkEnable
            bool m_bReloadVisuallyComplete; // 0x17f9            
            uint8_t _pad17fa[0x2]; // 0x17fa
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0x17fc            
            // metadata: MNetworkEnable
            bool m_bIsHauledBack; // 0x1800            
            // metadata: MNetworkEnable
            bool m_bSilencerOn; // 0x1801            
            uint8_t _pad1802[0x2]; // 0x1802
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0x1804            
            // metadata: MNetworkEnable
            std::int32_t m_iOriginalTeamNumber; // 0x1808            
            // metadata: MNetworkEnable
            std::int32_t m_iMostRecentTeamNumber; // 0x180c            
            // metadata: MNetworkEnable
            bool m_bDroppedNearBuyZone; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            float m_flNextAttackRenderTimeOffset; // 0x1814            
            uint8_t _pad1818[0x98]; // 0x1818
            bool m_bClearWeaponIdentifyingUGC; // 0x18b0            
            bool m_bVisualsDataSet; // 0x18b1            
            bool m_bOldFirstPersonSpectatedState; // 0x18b2            
            bool m_bUIWeapon; // 0x18b3            
            std::int32_t m_nCustomEconReloadEventId; // 0x18b4            
            uint8_t _pad18b8[0x8]; // 0x18b8
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0x18c0            
            // metadata: MNetworkEnable
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0x18c4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nDropTick; // 0x18c8            
            uint8_t _pad18cc[0x20]; // 0x18cc
            bool m_donated; // 0x18ec            
            uint8_t _pad18ed[0x3]; // 0x18ed
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0x18f0            
            bool m_bWasOwnedByCT; // 0x18f4            
            bool m_bWasOwnedByTerrorist; // 0x18f5            
            uint8_t _pad18f6[0x2]; // 0x18f6
            float m_gunHeat; // 0x18f8            
            std::uint32_t m_smokeAttachments; // 0x18fc            
            source2sdk::entity2::GameTime_t m_lastSmokeTime; // 0x1900            
            float m_flNextClientFireBulletTime; // 0x1904            
            float m_flNextClientFireBulletTime_Repredict; // 0x1908            
            uint8_t _pad190c[0xd4]; // 0x190c
            source2sdk::client::C_IronSightController m_IronSightController; // 0x19e0            
            // metadata: MNetworkEnable
            std::int32_t m_iIronSightMode; // 0x1a90            
            uint8_t _pad1a94[0xc]; // 0x1a94
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0x1aa0            
            // metadata: MNetworkEnable
            std::int32_t m_iNumEmptyAttacks; // 0x1aa4            
            uint8_t _pad1aa8[0x58]; // 0x1aa8
            source2sdk::entity2::GameTime_t m_flLastMagDropRequestTime; // 0x1b00            
            float m_flWatTickOffset; // 0x1b04            
            uint8_t _pad1b08[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBase) == 0x1b20);
    };
};
