#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/ChickenActivity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x3168
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
        #pragma pack(push, 1)
        class CChicken : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0c58[0x20]; // 0xc58
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0xc78            
            source2sdk::server::CountdownTimer m_updateTimer; // 0xf40            
            Vector m_stuckAnchor; // 0xf58            
            uint8_t _pad0f64[0x4]; // 0xf64
            source2sdk::server::CountdownTimer m_stuckTimer; // 0xf68            
            source2sdk::server::CountdownTimer m_collisionStuckTimer; // 0xf80            
            bool m_isOnGround; // 0xf98            
            uint8_t _pad0f99[0x3]; // 0xf99
            Vector m_vFallVelocity; // 0xf9c            
            source2sdk::server::ChickenActivity m_desiredActivity; // 0xfa8            
            source2sdk::server::ChickenActivity m_currentActivity; // 0xfac            
            source2sdk::server::CountdownTimer m_activityTimer; // 0xfb0            
            float m_turnRate; // 0xfc8            
            // m_fleeFrom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_fleeFrom;
            char m_fleeFrom[0x4]; // 0xfcc            
            source2sdk::server::CountdownTimer m_moveRateThrottleTimer; // 0xfd0            
            source2sdk::server::CountdownTimer m_startleTimer; // 0xfe8            
            source2sdk::server::CountdownTimer m_vocalizeTimer; // 0x1000            
            source2sdk::entity2::GameTime_t m_flWhenZombified; // 0x1018            
            // metadata: MNetworkEnable
            bool m_jumpedThisFrame; // 0x101c            
            uint8_t _pad101d[0x3]; // 0x101d
            // metadata: MNetworkEnable
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0x1020            
            uint8_t _pad1024[0x14]; // 0x1024
            source2sdk::server::CountdownTimer m_reuseTimer; // 0x1038            
            bool m_hasBeenUsed; // 0x1050            
            uint8_t _pad1051[0x7]; // 0x1051
            source2sdk::server::CountdownTimer m_jumpTimer; // 0x1058            
            float m_flLastJumpTime; // 0x1070            
            bool m_bInJump; // 0x1074            
            uint8_t _pad1075[0x200b]; // 0x1075
            source2sdk::server::CountdownTimer m_repathTimer; // 0x3080            
            uint8_t _pad3098[0x80]; // 0x3098
            Vector m_vecPathGoal; // 0x3118            
            source2sdk::entity2::GameTime_t m_flActiveFollowStartTime; // 0x3124            
            source2sdk::server::CountdownTimer m_followMinuteTimer; // 0x3128            
            uint8_t _pad3140[0x8]; // 0x3140
            source2sdk::server::CountdownTimer m_BlockDirectionTimer; // 0x3148            
            uint8_t _pad3160[0x8];
            
            // Datamap fields:
            // void CChickenChickenTouch; // 0x0
            // void CChickenChickenThink; // 0x0
            // void CChickenChickenUse; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChicken because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CChicken) == 0x3168);
    };
};
