#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 35
        // Alignment: 4
        // Size: 0x4
        enum class vote_create_failed_t : std::uint32_t
        {
            VOTE_FAILED_GENERIC = 0x0,
            VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
            VOTE_FAILED_RATE_EXCEEDED = 0x2,
            VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
            VOTE_FAILED_QUORUM_FAILURE = 0x4,
            VOTE_FAILED_ISSUE_DISABLED = 0x5,
            VOTE_FAILED_MAP_NOT_FOUND = 0x6,
            VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
            VOTE_FAILED_FAILED_RECENTLY = 0x8,
            VOTE_FAILED_TEAM_CANT_CALL = 0x9,
            VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
            VOTE_FAILED_PLAYERNOTFOUND = 0xb,
            VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
            VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
            VOTE_FAILED_SPECTATOR = 0xe,
            VOTE_FAILED_FAILED_RECENT_KICK = 0xf,
            VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 0x10,
            VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 0x11,
            VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 0x12,
            VOTE_FAILED_FAILED_RECENT_RESTART = 0x13,
            VOTE_FAILED_SWAP_IN_PROGRESS = 0x14,
            VOTE_FAILED_DISABLED = 0x15,
            VOTE_FAILED_NEXTLEVEL_SET = 0x16,
            VOTE_FAILED_TOO_EARLY_SURRENDER = 0x17,
            VOTE_FAILED_MATCH_PAUSED = 0x18,
            VOTE_FAILED_MATCH_NOT_PAUSED = 0x19,
            VOTE_FAILED_NOT_IN_WARMUP = 0x1a,
            VOTE_FAILED_NOT_10_PLAYERS = 0x1b,
            VOTE_FAILED_TIMEOUT_ACTIVE = 0x1c,
            VOTE_FAILED_TIMEOUT_INACTIVE = 0x1d,
            VOTE_FAILED_TIMEOUT_EXHAUSTED = 0x1e,
            VOTE_FAILED_CANT_ROUND_END = 0x1f,
            VOTE_FAILED_REMATCH = 0x20,
            VOTE_FAILED_CONTINUE = 0x21,
            VOTE_FAILED_MAX = 0x22,
        };
    };
};
