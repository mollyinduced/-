#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x5a0
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
        class C_VoteController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0568[0x10]; // 0x568
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecvProxy_VoteType"
            std::int32_t m_iActiveIssueIndex; // 0x578            
            // metadata: MNetworkEnable
            std::int32_t m_iOnlyTeamToVote; // 0x57c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecvProxy_VoteOption"
            std::int32_t m_nVoteOptionCount[5]; // 0x580            
            // metadata: MNetworkEnable
            std::int32_t m_nPotentialVotes; // 0x594            
            bool m_bVotesDirty; // 0x598            
            bool m_bTypeDirty; // 0x599            
            // metadata: MNetworkEnable
            bool m_bIsYesNoVote; // 0x59a            
            uint8_t _pad059b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_VoteController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_VoteController) == 0x5a0);
    };
};
