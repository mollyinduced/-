#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseIssue;
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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "int m_iActiveIssueIndex"
        // static metadata: MNetworkVarNames "int m_iOnlyTeamToVote"
        // static metadata: MNetworkVarNames "int m_nVoteOptionCount"
        // static metadata: MNetworkVarNames "int m_nPotentialVotes"
        // static metadata: MNetworkVarNames "bool m_bIsYesNoVote"
        #pragma pack(push, 1)
        class CVoteController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iActiveIssueIndex; // 0x4e0            
            // metadata: MNetworkEnable
            std::int32_t m_iOnlyTeamToVote; // 0x4e4            
            // metadata: MNetworkEnable
            std::int32_t m_nVoteOptionCount[5]; // 0x4e8            
            // metadata: MNetworkEnable
            std::int32_t m_nPotentialVotes; // 0x4fc            
            // metadata: MNetworkEnable
            bool m_bIsYesNoVote; // 0x500            
            uint8_t _pad0501[0x7]; // 0x501
            source2sdk::server::CountdownTimer m_acceptingVotesTimer; // 0x508            
            source2sdk::server::CountdownTimer m_executeCommandTimer; // 0x520            
            source2sdk::server::CountdownTimer m_resetVoteTimer; // 0x538            
            std::int32_t m_nVotesCast[64]; // 0x550            
            CPlayerSlot m_playerHoldingVote; // 0x650            
            CPlayerSlot m_playerOverrideForVote; // 0x654            
            std::int32_t m_nHighestCountIndex; // 0x658            
            uint8_t _pad065c[0x4]; // 0x65c
            // m_potentialIssues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseIssue*> m_potentialIssues;
            char m_potentialIssues[0x18]; // 0x660            
            // m_VoteOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_VoteOptions;
            char m_VoteOptions[0x18]; // 0x678            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoteController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CVoteController) == 0x690);
    };
};
