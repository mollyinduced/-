#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/QuestProgress_Reason.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_DamageServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_InGameMoneyServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_InventoryServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSObserverPawn;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x870
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
        class CCSPlayerController : public source2sdk::client::CBasePlayerController
        {
        public:
            uint8_t _pad0710[0x10]; // 0x710
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x720            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x728            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x730            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayerController_DamageServices* m_pDamageServices; // 0x738            
            // metadata: MNetworkEnable
            std::uint32_t m_iPing; // 0x740            
            // metadata: MNetworkEnable
            bool m_bHasCommunicationAbuseMute; // 0x744            
            uint8_t _pad0745[0x3]; // 0x745
            // metadata: MNetworkEnable
            std::uint32_t m_uiCommunicationMuteFlags; // 0x748            
            uint8_t _pad074c[0x4]; // 0x74c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCrosshairCodes; // 0x750            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPendingTeamChanged"
            std::uint8_t m_iPendingTeamNum; // 0x758            
            uint8_t _pad0759[0x3]; // 0x759
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flForceTeamTime; // 0x75c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCompTeammateColorChanged"
            std::int32_t m_iCompTeammateColor; // 0x760            
            // metadata: MNetworkEnable
            bool m_bEverPlayedOnTeam; // 0x764            
            uint8_t _pad0765[0x3]; // 0x765
            source2sdk::entity2::GameTime_t m_flPreviousForceJoinTeamTime; // 0x768            
            uint8_t _pad076c[0x4]; // 0x76c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szClan; // 0x770            
            CUtlString m_sSanitizedPlayerName; // 0x778            
            // metadata: MNetworkEnable
            std::int32_t m_iCoachingTeam; // 0x780            
            uint8_t _pad0784[0x4]; // 0x784
            // metadata: MNetworkEnable
            std::uint64_t m_nPlayerDominated; // 0x788            
            // metadata: MNetworkEnable
            std::uint64_t m_nPlayerDominatingMe; // 0x790            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRanking; // 0x798            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveWins; // 0x79c            
            // metadata: MNetworkEnable
            std::int8_t m_iCompetitiveRankType; // 0x7a0            
            uint8_t _pad07a1[0x3]; // 0x7a1
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Win; // 0x7a4            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Loss; // 0x7a8            
            // metadata: MNetworkEnable
            std::int32_t m_iCompetitiveRankingPredicted_Tie; // 0x7ac            
            // metadata: MNetworkEnable
            std::int32_t m_nEndMatchNextMapVote; // 0x7b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint16_t m_unActiveQuestId; // 0x7b4            
            uint8_t _pad07b6[0x2]; // 0x7b6
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_rtActiveMissionPeriod; // 0x7b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::QuestProgress_Reason m_nQuestProgressReason; // 0x7bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_unPlayerTvControlFlags; // 0x7c0            
            uint8_t _pad07c4[0x2c]; // 0x7c4
            std::int32_t m_iDraftIndex; // 0x7f0            
            std::uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7f4            
            std::uint32_t m_uiAbandonRecordedReason; // 0x7f8            
            std::uint32_t m_eNetworkDisconnectionReason; // 0x7fc            
            bool m_bCannotBeKicked; // 0x800            
            bool m_bEverFullyConnected; // 0x801            
            bool m_bAbandonAllowsSurrender; // 0x802            
            bool m_bAbandonOffersInstantSurrender; // 0x803            
            bool m_bDisconnection1MinWarningPrinted; // 0x804            
            bool m_bScoreReported; // 0x805            
            uint8_t _pad0806[0x2]; // 0x806
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nDisconnectionTick; // 0x808            
            uint8_t _pad080c[0xc]; // 0x80c
            // metadata: MNetworkEnable
            bool m_bControllingBot; // 0x818            
            // metadata: MNetworkEnable
            bool m_bHasControlledBotThisRound; // 0x819            
            bool m_bHasBeenControlledByPlayerThisRound; // 0x81a            
            uint8_t _pad081b[0x1]; // 0x81b
            std::int32_t m_nBotsControlledThisRound; // 0x81c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bCanControlObservedBot; // 0x820            
            uint8_t _pad0821[0x3]; // 0x821
            // metadata: MNetworkEnable
            // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPlayerPawn;
            char m_hPlayerPawn[0x4]; // 0x824            
            // metadata: MNetworkEnable
            // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSObserverPawn> m_hObserverPawn;
            char m_hObserverPawn[0x4]; // 0x828            
            // metadata: MNetworkEnable
            bool m_bPawnIsAlive; // 0x82c            
            uint8_t _pad082d[0x3]; // 0x82d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            std::uint32_t m_iPawnHealth; // 0x830            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            std::int32_t m_iPawnArmor; // 0x834            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            bool m_bPawnHasDefuser; // 0x838            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
            bool m_bPawnHasHelmet; // 0x839            
            // metadata: MNetworkEnable
            std::uint16_t m_nPawnCharacterDefIndex; // 0x83a            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnLifetimeStart; // 0x83c            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnLifetimeEnd; // 0x840            
            // metadata: MNetworkEnable
            std::int32_t m_iPawnBotDifficulty; // 0x844            
            // metadata: MNetworkEnable
            // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
            char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x848            
            // metadata: MNetworkEnable
            std::int32_t m_iScore; // 0x84c            
            // metadata: MNetworkEnable
            std::uint8_t m_recentKillQueue[8]; // 0x850            
            // metadata: MNetworkEnable
            std::uint8_t m_nFirstKill; // 0x858            
            // metadata: MNetworkEnable
            std::uint8_t m_nKillCount; // 0x859            
            // metadata: MNetworkEnable
            bool m_bMvpNoMusic; // 0x85a            
            uint8_t _pad085b[0x1]; // 0x85b
            // metadata: MNetworkEnable
            std::int32_t m_eMvpReason; // 0x85c            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicKitID; // 0x860            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicKitMVPs; // 0x864            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMVPCountChanged"
            std::int32_t m_iMVPs; // 0x868            
            bool m_bIsPlayerNameDirty; // 0x86c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bFireBulletsSeedSynchronized; // 0x86d            
            uint8_t _pad086e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController) == 0x870);
    };
};
