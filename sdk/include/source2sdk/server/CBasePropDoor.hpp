#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/locksound_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0xee8
        // Has VTable
        // Is Abstract
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
        // static metadata: MNetworkVarNames "bool m_bLocked"
        // static metadata: MNetworkVarNames "Vector m_closedPosition"
        // static metadata: MNetworkVarNames "QAngle m_closedAngles"
        // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class CBasePropDoor : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0c58[0x10]; // 0xc58
            float m_flAutoReturnDelay; // 0xc68            
            uint8_t _pad0c6c[0x4]; // 0xc6c
            // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePropDoor>> m_hDoorList;
            char m_hDoorList[0x18]; // 0xc70            
            std::int32_t m_nHardwareType; // 0xc88            
            bool m_bNeedsHardware; // 0xc8c            
            uint8_t _pad0c8d[0x3]; // 0xc8d
            // metadata: MNetworkEnable
            source2sdk::client::DoorState_t m_eDoorState; // 0xc90            
            // metadata: MNetworkEnable
            bool m_bLocked; // 0xc94            
            uint8_t _pad0c95[0x3]; // 0xc95
            // metadata: MNetworkEnable
            Vector m_closedPosition; // 0xc98            
            // metadata: MNetworkEnable
            QAngle m_closedAngles; // 0xca4            
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBlocker;
            char m_hBlocker[0x4]; // 0xcb0            
            bool m_bFirstBlocked; // 0xcb4            
            uint8_t _pad0cb5[0x3]; // 0xcb5
            source2sdk::server::locksound_t m_ls; // 0xcb8            
            bool m_bForceClosed; // 0xcd8            
            uint8_t _pad0cd9[0x3]; // 0xcd9
            Vector m_vecLatchWorldPosition; // 0xcdc            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xce8            
            uint8_t _pad0cec[0xc]; // 0xcec
            CUtlSymbolLarge m_SoundMoving; // 0xcf8            
            CUtlSymbolLarge m_SoundOpen; // 0xd00            
            CUtlSymbolLarge m_SoundClose; // 0xd08            
            CUtlSymbolLarge m_SoundLock; // 0xd10            
            CUtlSymbolLarge m_SoundUnlock; // 0xd18            
            CUtlSymbolLarge m_SoundLatch; // 0xd20            
            CUtlSymbolLarge m_SoundPound; // 0xd28            
            CUtlSymbolLarge m_SoundJiggle; // 0xd30            
            CUtlSymbolLarge m_SoundLockedAnim; // 0xd38            
            std::int32_t m_numCloseAttempts; // 0xd40            
            CUtlStringToken m_nPhysicsMaterial; // 0xd44            
            CUtlSymbolLarge m_SlaveName; // 0xd48            
            // metadata: MNetworkEnable
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xd50            
            uint8_t _pad0d54[0x4]; // 0xd54
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0xd58            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0xd80            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xda8            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xdd0            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xdf8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xe20            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0xe48            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xe70            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xe98            
            source2sdk::entity2::CEntityIOOutput m_OnAjarOpen; // 0xec0            
            
            // Datamap fields:
            // void m_hSoundMoving; // 0xcec
            //  m_ls.sLockedSound; // 0xcc0
            //  m_ls.sUnlockedSound; // 0xcc8
            // void InputOpen; // 0x0
            // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
            // float InputOpenAwayFromActivator; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPlayerOpen; // 0x0
            // void InputPlayerClose; // 0x0
            // void CBasePropDoorDoorOpenMoveDone; // 0x0
            // void CBasePropDoorDoorCloseMoveDone; // 0x0
            // void CBasePropDoorDoorAutoCloseThink; // 0x0
            // void CBasePropDoorDisableAreaPortalThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePropDoor) == 0xee8);
    };
};
