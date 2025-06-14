#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/ViewAngleServerChange_t.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Expresser;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_AutoaimServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_CameraServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_FlashlightServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ItemServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_MovementServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ObserverServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_UseServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WaterServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WeaponServices;
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
        // Size: 0xc58
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
        // static metadata: MNetworkExcludeByUserGroup "FogController"
        // static metadata: MNetworkIncludeByUserGroup "Player"
        // static metadata: MNetworkIncludeByUserGroup "Water"
        // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkExcludeByName "m_pWeaponServices"
        // static metadata: MNetworkExcludeByName "m_pItemServices"
        // static metadata: MNetworkExcludeByName "m_pAutoaimServices"
        // static metadata: MNetworkExcludeByName "m_pObserverServices"
        // static metadata: MNetworkExcludeByName "m_pWaterServices"
        // static metadata: MNetworkExcludeByName "m_pUseServices"
        // static metadata: MNetworkExcludeByName "m_pFlashlightServices"
        // static metadata: MNetworkExcludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
        // static metadata: MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
        // static metadata: MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
        // static metadata: MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
        // static metadata: MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
        // static metadata: MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
        // static metadata: MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
        // static metadata: MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
        // static metadata: MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
        // static metadata: MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
        // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
        // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
        // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
        #pragma pack(push, 1)
        class CBasePlayerPawn : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_WeaponServices* m_pWeaponServices; // 0xac0            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ItemServices* m_pItemServices; // 0xac8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xad0            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_ObserverServices* m_pObserverServices; // 0xad8            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_WaterServices* m_pWaterServices; // 0xae0            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_UseServices* m_pUseServices; // 0xae8            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xaf0            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_CameraServices* m_pCameraServices; // 0xaf8            
            // metadata: MNetworkEnable
            source2sdk::server::CPlayer_MovementServices* m_pMovementServices; // 0xb00            
            uint8_t _pad0b08[0x8]; // 0xb08
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::ViewAngleServerChange_t> m_ServerViewAngleChanges;
            char m_ServerViewAngleChanges[0x50]; // 0xb10            
            std::uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xb60            
            QAngle v_angle; // 0xb64            
            QAngle v_anglePrevious; // 0xb70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_iHideHUD; // 0xb7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::server::sky3dparams_t m_skybox3d; // 0xb80            
            source2sdk::entity2::GameTime_t m_fTimeLastHurt; // 0xc10            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0xc14            
            source2sdk::entity2::GameTime_t m_fNextSuicideTime; // 0xc18            
            bool m_fInitHUD; // 0xc1c            
            uint8_t _pad0c1d[0x3]; // 0xc1d
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0xc20            
            // metadata: MNetworkEnable
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0xc28            
            uint8_t _pad0c2c[0x4]; // 0xc2c
            float m_fHltvReplayDelay; // 0xc30            
            float m_fHltvReplayEnd; // 0xc34            
            CEntityIndex m_iHltvReplayEntity; // 0xc38            
            uint8_t _pad0c3c[0x4]; // 0xc3c
            // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sndopvarlatchdata_t> m_sndOpvarLatchData;
            char m_sndOpvarLatchData[0x18]; // 0xc40            
            
            // Datamap fields:
            // void m_hPawnListEntry; // 0xc2c
            // void m_hLastValidNavArea; // 0xa70
            // void m_hCurrentNavArea; // 0xa60
            // void m_hCurrentNavAreaBlocked; // 0xa80
            // CHandle< CBaseEntity > controller; // 0x7fffffff
            // int32_t InputSetHealth; // 0x0
            // bool InputSetHUDVisibility; // 0x0
            // CUtlSymbolLarge InputSetFogController; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerPawn) == 0xc58);
    };
};
