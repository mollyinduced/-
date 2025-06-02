#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/CSWeaponState_t.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/client/WeaponAttackType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerWeapon.hpp"
#include "source2sdk/server/CIronSightController.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf68
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
        class CCSWeaponBase : public source2sdk::server::CBasePlayerWeapon
        {
        public:
            uint8_t _pad0d78[0x28]; // 0xd78
            bool m_bRemoveable; // 0xda0            
            uint8_t _pad0da1[0x7]; // 0xda1
            // metadata: MNetworkEnable
            float m_flFireSequenceStartTime; // 0xda8            
            // metadata: MNetworkEnable
            std::int32_t m_nFireSequenceStartTimeChange; // 0xdac            
            std::int32_t m_nFireSequenceStartTimeAck; // 0xdb0            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerAnimEvent_t m_ePlayerFireEvent; // 0xdb4            
            // metadata: MNetworkEnable
            source2sdk::client::WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xdb8            
            source2sdk::animationsystem::HSequence m_seqIdle; // 0xdbc            
            source2sdk::animationsystem::HSequence m_seqFirePrimary; // 0xdc0            
            source2sdk::animationsystem::HSequence m_seqFireSecondary; // 0xdc4            
            // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::HSequence> m_thirdPersonFireSequences;
            char m_thirdPersonFireSequences[0x18]; // 0xdc8            
            source2sdk::animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0xde0            
            std::int32_t m_nSilencerBoneIndex; // 0xde4            
            source2sdk::animationsystem::HSequence m_thirdPersonSequences[7]; // 0xde8            
            uint8_t _pad0e04[0xc]; // 0xe04
            bool m_bPlayerAmmoStockOnPickup; // 0xe10            
            bool m_bRequireUseToTouch; // 0xe11            
            uint8_t _pad0e12[0x2]; // 0xe12
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponStateNetworkChange"
            source2sdk::client::CSWeaponState_t m_iState; // 0xe14            
            source2sdk::entity2::GameTime_t m_flLastTimeInAir; // 0xe18            
            std::int32_t m_nLastEmptySoundCmdNum; // 0xe1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::uint32_t m_nViewModelIndex; // 0xe20            
            bool m_bReloadsWithClips; // 0xe24            
            uint8_t _pad0e25[0x1b]; // 0xe25
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flTimeWeaponIdle; // 0xe40            
            bool m_bFireOnEmpty; // 0xe44            
            uint8_t _pad0e45[0x3]; // 0xe45
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xe48            
            // metadata: MNetworkEnable
            source2sdk::client::CSWeaponMode m_weaponMode; // 0xe70            
            float m_flTurningInaccuracyDelta; // 0xe74            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0xe78            
            float m_flTurningInaccuracy; // 0xe84            
            // metadata: MNetworkEnable
            float m_fAccuracyPenalty; // 0xe88            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0xe8c            
            float m_fAccuracySmoothedForZoom; // 0xe90            
            source2sdk::entity2::GameTime_t m_fScopeZoomEndTime; // 0xe94            
            // metadata: MNetworkEnable
            std::int32_t m_iRecoilIndex; // 0xe98            
            // metadata: MNetworkEnable
            float m_flRecoilIndex; // 0xe9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
            bool m_bBurstMode; // 0xea0            
            uint8_t _pad0ea1[0x3]; // 0xea1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0xea4            
            // metadata: MNetworkEnable
            float m_flPostponeFireReadyFrac; // 0xea8            
            // metadata: MNetworkEnable
            bool m_bInReload; // 0xeac            
            // metadata: MNetworkEnable
            bool m_bReloadVisuallyComplete; // 0xead            
            uint8_t _pad0eae[0x2]; // 0xeae
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0xeb0            
            // metadata: MNetworkEnable
            bool m_bIsHauledBack; // 0xeb4            
            // metadata: MNetworkEnable
            bool m_bSilencerOn; // 0xeb5            
            uint8_t _pad0eb6[0x2]; // 0xeb6
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0xeb8            
            // metadata: MNetworkEnable
            std::int32_t m_iOriginalTeamNumber; // 0xebc            
            // metadata: MNetworkEnable
            std::int32_t m_iMostRecentTeamNumber; // 0xec0            
            // metadata: MNetworkEnable
            bool m_bDroppedNearBuyZone; // 0xec4            
            uint8_t _pad0ec5[0x3]; // 0xec5
            float m_flNextAttackRenderTimeOffset; // 0xec8            
            uint8_t _pad0ecc[0x14]; // 0xecc
            bool m_bCanBePickedUp; // 0xee0            
            bool m_bUseCanOverrideNextOwnerTouchTime; // 0xee1            
            uint8_t _pad0ee2[0x2]; // 0xee2
            source2sdk::entity2::GameTime_t m_nextOwnerTouchTime; // 0xee4            
            source2sdk::entity2::GameTime_t m_nextPrevOwnerTouchTime; // 0xee8            
            uint8_t _pad0eec[0x4]; // 0xeec
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0xef0            
            // metadata: MNetworkEnable
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0xef4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nDropTick; // 0xef8            
            uint8_t _pad0efc[0x20]; // 0xefc
            bool m_donated; // 0xf1c            
            uint8_t _pad0f1d[0x3]; // 0xf1d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0xf20            
            bool m_bWasOwnedByCT; // 0xf24            
            bool m_bWasOwnedByTerrorist; // 0xf25            
            bool m_bFiredOutOfAmmoEvent; // 0xf26            
            uint8_t _pad0f27[0x1]; // 0xf27
            std::int32_t m_numRemoveUnownedWeaponThink; // 0xf28            
            uint8_t _pad0f2c[0x4]; // 0xf2c
            source2sdk::server::CIronSightController m_IronSightController; // 0xf30            
            // metadata: MNetworkEnable
            std::int32_t m_iIronSightMode; // 0xf48            
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0xf4c            
            // metadata: MNetworkEnable
            std::int32_t m_iNumEmptyAttacks; // 0xf50            
            float m_flWatTickOffset; // 0xf54            
            uint8_t _pad0f58[0x10];
            
            // Datamap fields:
            // void CCSWeaponBaseDefaultTouch; // 0x0
            // void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
            // void InputToggleCanBePickedUp; // 0x0
            // float InputSetAmmoAmount; // 0x0
            // int32_t InputSetReserveAmmoAmount; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBase) == 0xf68);
    };
};
