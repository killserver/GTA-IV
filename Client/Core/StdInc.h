//============== Networked: IV - http://code.networked-iv.com ==============
//
// File: StdInc.h
// Project: Client
// License: See LICENSE in root directory
//
//==========================================================================

#pragma once

// Default
#include <windows.h>
#include <windowsx.h>
#include <stdio.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <dinput.h>
#include <list>
#include <mmsystem.h>
#include <map>
#include <queue>
#include <assert.h>

// Shared
#include <Common.h>
#include <CString.h>
#include <SharedUtility.h>
#include <CPatcher.h>
#include <CPlayerSocket.h>
#include <CPacket.h>
#include <PacketIdentifiers.h>
#include <PacketPriorities.h>
#include <PacketReliabilities.h>
#include <PacketChannels.h>
#include <RPCIdentifiers.h>
#include <CVector3.h>
#include <CMath.h>
#include <CNetworkPadState.h>
#include <CBitStream.h>
#include <CPacketHandler.h>
#include <CRPCHandler.h>
#include <CNetStats.h>
#include <CNetClientInterface.h>
#include <CNetServerInterface.h>
#include <CLibrary.h>
#include <CNetworkModule.h>
#include <CLogFile.h>
#include <CExceptionHandler.h>

// XML stuff
#include <TinyXML/tinyxml.h>
#include <TinyXML/ticpp.h>
#include <CXML.h>

// Project
#include "CDirect3D9Hook.h"
#include "CDirect3D9Proxy.h"
#include "CDirect3DDevice9Proxy.h"
#include "CDirectInput8Hook.h"
#include "CDirectInput8Proxy.h"
#include "CDirectInputDevice8Proxy.h"
#include "CWindowSubclass.h"
#include "CXLiveHook.h"
#include "CFont.h"
#include "CD3DXFont.h"
#include "CChatLine.h"
#include "CChatWindow.h"

// IV
#include "IVCommon.h"
#include "NativeContext.h"
#include "InvokeNative.h"
#include "CIVEntity.h"
#include "CIVDynamicEntity.h"
#include "CIVWeaponInfo.h"
#include "CIVPhysical.h"
#include "CIVPedTaskManager.h"
#include "CIVPed.h"
#include "CIVPlayerPed.h"
#include "CIVPlayerInfo.h"
#include "CIVVehicle.h"
#include "CIVTask.h"
#include "CPools.h"
#include "CIVWorld.h"
#include "CIVModelInfo.h"
#include "CPatches.h"
#include "COffsets.h"
#include "KeySync.h"
#include "CIVPad.h"
#include "CStreaming.h"
#include "CIVWeapon.h"
#include "CGame.h"
#include "CClientPadState.h"
#include "CContextDataManager.h"
#include "CClientTaskManager.h"
#include "CClientInputManager.h"
#include "IVTasks.h"

// Project
#include "CBitStream.h"
#include "CClientRPCHandler.h"
#include "CClientPacketHandler.h"
#include <squirrel/squirrel.h>
#include <scripting/CEntity.h>
#include <scripting/CRootEntity.h>
#include "CStreamableEntity.h"
#include "CClientPlayer.h"
#include "CClientVehicle.h"
#include "CStreamer.h"
#include "CClientNetworkManager.h"
#include "CClientPlayerManager.h"
#include "CClientVehicleManager.h"

// GUI
#include <Gwen/Controls/PanelListPanel.h>
#include <Gwen/Controls/Text.h>
#include <Gwen/Controls/WindowControl.h>
#include <Gwen/Input/Windows.h>
#include <Gwen/Renderers/DirectX9.h>
#include <Gwen/Skins/Simple.h>
#include <Gwen/Align.h>
#include "CGUIView.h"
#include "CMainMenu.h"
#include "CGUI.h"

// Project
#include "CClient.h"

// IV
#include "CIVPool.h"

// Scripting
#include <scripting/CSquirrelArguments.h>
#include <scripting/CSquirrel.h>
#include <scripting/CTimer.h>
#include <scripting/CTimers.h>
#include <scripting/CResource.h>
#include <scripting/CResourceManager.h>

// Shared natives
#include <scripting/natives/NativesCommon.h>
#include <scripting/natives/CEntityNatives.h>
#include <scripting/natives/CResourceNatives.h>
#include <scripting/natives/CEventNatives.h>
#include <scripting/natives/CTimerNatives.h>