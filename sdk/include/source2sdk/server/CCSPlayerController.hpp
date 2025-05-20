#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/QuestProgress_Reason.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSObserverPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_DamageServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_InGameMoneyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_InventoryServices;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xfa98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
        // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
        // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
        // static metadata: MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
        // static metadata: MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
        // static metadata: MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
        // static metadata: MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
        // static metadata: MNetworkVarNames "uint32 m_iPing"
        // static metadata: MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
        // static metadata: MNetworkVarNames "uint32 m_uiCommunicationMuteFlags"
        // static metadata: MNetworkVarNames "string_t m_szCrosshairCodes"
        // static metadata: MNetworkVarNames "uint8 m_iPendingTeamNum"
        // static metadata: MNetworkVarNames "GameTime_t m_flForceTeamTime"
        // static metadata: MNetworkVarNames "int m_iCompTeammateColor"
        // static metadata: MNetworkVarNames "bool m_bEverPlayedOnTeam"
        // static metadata: MNetworkVarNames "string_t m_szClan"
        // static metadata: MNetworkVarNames "int m_iCoachingTeam"
        // static metadata: MNetworkVarNames "uint64 m_nPlayerDominated"
        // static metadata: MNetworkVarNames "uint64 m_nPlayerDominatingMe"
        // static metadata: MNetworkVarNames "int m_iCompetitiveRanking"
        // static metadata: MNetworkVarNames "int m_iCompetitiveWins"
        // static metadata: MNetworkVarNames "int8 m_iCompetitiveRankType"
        // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
        // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
        // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
        // static metadata: MNetworkVarNames "int m_nEndMatchNextMapVote"
        // static metadata: MNetworkVarNames "uint16 m_unActiveQuestId"
        // static metadata: MNetworkVarNames "RTime32 m_rtActiveMissionPeriod"
        // static metadata: MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
        // static metadata: MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
        // static metadata: MNetworkVarNames "int m_nDisconnectionTick"
        // static metadata: MNetworkVarNames "bool m_bControllingBot"
        // static metadata: MNetworkVarNames "bool m_bHasControlledBotThisRound"
        // static metadata: MNetworkVarNames "bool m_bCanControlObservedBot"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
        // static metadata: MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
        // static metadata: MNetworkVarNames "bool m_bPawnIsAlive"
        // static metadata: MNetworkVarNames "uint32 m_iPawnHealth"
        // static metadata: MNetworkVarNames "int m_iPawnArmor"
        // static metadata: MNetworkVarNames "bool m_bPawnHasDefuser"
        // static metadata: MNetworkVarNames "bool m_bPawnHasHelmet"
        // static metadata: MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
        // static metadata: MNetworkVarNames "int m_iPawnLifetimeStart"
        // static metadata: MNetworkVarNames "int m_iPawnLifetimeEnd"
        // static metadata: MNetworkVarNames "int m_iPawnBotDifficulty"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
        // static metadata: MNetworkVarNames "int32 m_iScore"
        // static metadata: MNetworkVarNames "uint8 m_recentKillQueue"
        // static metadata: MNetworkVarNames "uint8 m_nFirstKill"
        // static metadata: MNetworkVarNames "uint8 m_nKillCount"
        // static metadata: MNetworkVarNames "bool m_bMvpNoMusic"
        // static metadata: MNetworkVarNames "int m_eMvpReason"
        // static metadata: MNetworkVarNames "int m_iMusicKitID"
        // static metadata: MNetworkVarNames "int m_iMusicKitMVPs"
        // static metadata: MNetworkVarNames "int m_iMVPs"
        // static metadata: MNetworkVarNames "bool m_bFireBulletsSeedSynchronized"
        #pragma pack(push, 1)
        class CCSPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            uint8_t _pad0778[0x10]; // 0x778
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x788            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x790            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x798            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayerController_DamageServices* m_pDamageServices; // 0x7a0            
            // metadata: MNetworkEnable
            std::uint32_t m_iPing; // 0x7a8            
            // metadata: MNetworkEnable
            bool m_bHasCommunicationAbuseMute; // 0x7ac            
            uint8_t _pad07ad[0x3]; // 0x7ad
            // metadata: MNetworkEnable
            std::uint32_t m_uiCommunicationMuteFlags; // 0x7b0            
            uint8_t _pad07b4[0x4]; // 0x7b4
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCrosshairCodes; // 0x7b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPendingTeamChanged"
            std::uint8_t m_iPendingTeamNum; // 0x7c0            
            uint8_t _pad07c1[0x3]; // 0x7c1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flForceTeamTime; // 0x7c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCompTeammateColorChanged"
            std::int32_t m_iCompTeammateColor; // 0x7c8            
            // metadata: MNetworkEnable
            bool m_bEverPlayedOnTeam; // 0x7cc            
            bool m_bAttemptedToGetColor; // 0x7cd            
            uint8_t _pad07ce[0x2]; // 0x7ce
            std::int32_t m_iTeammatePreferredColor; // 0x7d0            
            bool m_bTeamChanged; // 0x7d4            
            bool m_bInSwitchTeam; // 0x7d5            
            bool m_bHasSeenJoinGame; // 0x7d6            
            bool m_bJustBecameSpectator; // 0x7d7            
            bool m_bSwitchTeamsOnNextRoundReset; // 0x7d8            
            bool m_bRemoveAllItemsOnNextRoundReset; // 0x7d9            
            uint8_t _pad07da[0x2]; // 0x7da
            source2sdk::entity2::GameTime_t m_flLastJoinTeamTime; // 0x7dc            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szClan; // 0x7e0            
            char m_szClanName[32]; // 0x7e8            
            // metadata: MNetworkEnable
            std::int32_t m_iCoachingTeam; // 0x808            
            uint8_t _pad080c[0x4]; // 0x80c
            // metadata: MNetworkEnable
            std::uint64_t m_nPlayerDominated; // 0x810            
            // metadata: MNetworkEnable
            std::uint64_t m_nPlayerDominatingMe; // 0x818            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRanking; // 0x820            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveWins; // 0x824            
            // metadata: MNetworkEnable
            std::int8_t m_iCompetitiveRankType; // 0x828            
            uint8_t _pad0829[0x3]; // 0x829
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Win; // 0x82c            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Loss; // 0x830            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Tie; // 0x834            
            // metadata: MNetworkEnable
            std::int32_t m_nEndMatchNextMapVote; // 0x838            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint16_t m_unActiveQuestId; // 0x83c            
            uint8_t _pad083e[0x2]; // 0x83e
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_rtActiveMissionPeriod; // 0x840            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::QuestProgress_Reason m_nQuestProgressReason; // 0x844            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_unPlayerTvControlFlags; // 0x848            
            uint8_t _pad084c[0x2c]; // 0x84c
            std::int32_t m_iDraftIndex; // 0x878            
            std::uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x87c            
            std::uint32_t m_uiAbandonRecordedReason; // 0x880            
            std::uint32_t m_eNetworkDisconnectionReason; // 0x884            
            bool m_bCannotBeKicked; // 0x888            
            bool m_bEverFullyConnected; // 0x889            
            bool m_bAbandonAllowsSurrender; // 0x88a            
            bool m_bAbandonOffersInstantSurrender; // 0x88b            
            bool m_bDisconnection1MinWarningPrinted; // 0x88c            
            bool m_bScoreReported; // 0x88d            
            uint8_t _pad088e[0x2]; // 0x88e
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nDisconnectionTick; // 0x890            
            uint8_t _pad0894[0xc]; // 0x894
            // metadata: MNetworkEnable
            bool m_bControllingBot; // 0x8a0            
            // metadata: MNetworkEnable
            bool m_bHasControlledBotThisRound; // 0x8a1            
            bool m_bHasBeenControlledByPlayerThisRound; // 0x8a2            
            uint8_t _pad08a3[0x1]; // 0x8a3
            std::int32_t m_nBotsControlledThisRound; // 0x8a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bCanControlObservedBot; // 0x8a8            
            uint8_t _pad08a9[0x3]; // 0x8a9
            // metadata: MNetworkEnable
            // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPlayerPawn;
            char m_hPlayerPawn[0x4]; // 0x8ac            
            // metadata: MNetworkEnable
            // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSObserverPawn> m_hObserverPawn;
            char m_hObserverPawn[0x4]; // 0x8b0            
            std::int32_t m_DesiredObserverMode; // 0x8b4            
            CEntityHandle m_hDesiredObserverTarget; // 0x8b8            
            // metadata: MNetworkEnable
            bool m_bPawnIsAlive; // 0x8bc            
            uint8_t _pad08bd[0x3]; // 0x8bd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            std::uint32_t m_iPawnHealth; // 0x8c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            std::int32_t m_iPawnArmor; // 0x8c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            bool m_bPawnHasDefuser; // 0x8c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            bool m_bPawnHasHelmet; // 0x8c9            
            // metadata: MNetworkEnable
            std::uint16_t m_nPawnCharacterDefIndex; // 0x8ca            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnLifetimeStart; // 0x8cc            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnLifetimeEnd; // 0x8d0            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnBotDifficulty; // 0x8d4            
            // metadata: MNetworkEnable
            // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
            char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x8d8            
            // metadata: MNetworkEnable
            std::int32_t m_iScore; // 0x8dc            
            std::int32_t m_iRoundScore; // 0x8e0            
            std::int32_t m_iRoundsWon; // 0x8e4            
            // metadata: MNetworkEnable
            std::uint8_t m_recentKillQueue[8]; // 0x8e8            
            // metadata: MNetworkEnable
            std::uint8_t m_nFirstKill; // 0x8f0            
            // metadata: MNetworkEnable
            std::uint8_t m_nKillCount; // 0x8f1            
            // metadata: MNetworkEnable
            bool m_bMvpNoMusic; // 0x8f2            
            uint8_t _pad08f3[0x1]; // 0x8f3
            // metadata: MNetworkEnable
            std::int32_t m_eMvpReason; // 0x8f4            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicKitID; // 0x8f8            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicKitMVPs; // 0x8fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMVPCountChanged"
            std::int32_t m_iMVPs; // 0x900            
            std::int32_t m_nUpdateCounter; // 0x904            
            float m_flSmoothedPing; // 0x908            
            uint8_t _pad090c[0xf0a4]; // 0x90c
            source2sdk::server::IntervalTimer m_lastHeldVoteTimer; // 0xf9b0            
            uint8_t _padf9c0[0x8]; // 0xf9c0
            bool m_bShowHints; // 0xf9c8            
            uint8_t _padf9c9[0x3]; // 0xf9c9
            std::int32_t m_iNextTimeCheck; // 0xf9cc            
            bool m_bJustDidTeamKill; // 0xf9d0            
            bool m_bPunishForTeamKill; // 0xf9d1            
            bool m_bGaveTeamDamageWarning; // 0xf9d2            
            bool m_bGaveTeamDamageWarningThisRound; // 0xf9d3            
            uint8_t _padf9d4[0x4]; // 0xf9d4
            double m_dblLastReceivedPacketPlatFloatTime; // 0xf9d8            
            source2sdk::entity2::GameTime_t m_LastTeamDamageWarningTime; // 0xf9e0            
            source2sdk::entity2::GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0xf9e4            
            std::uint32_t m_nSuspiciousHitCount; // 0xf9e8            
            std::uint32_t m_nNonSuspiciousHitStreak; // 0xf9ec            
            uint8_t _padf9f0[0xa1]; // 0xf9f0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bFireBulletsSeedSynchronized; // 0xfa91            
            uint8_t _padfa92[0x6];
            
            // Datamap fields:
            // void CCSPlayerControllerPlayerForceTeamThink; // 0x0
            // void CCSPlayerControllerResetForceTeamThink; // 0x0
            // void CCSPlayerControllerResourceDataThink; // 0x0
            // void CCSPlayerControllerInventoryUpdateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerController) == 0xfa98);
    };
};
