#pragma once

struct PluginHeader
{
  int ClientVersion;
  void* HWND;
  void* OnRecv;
  void* OnSend;
  void ( *OnHotkeyPressed )( int key, int mod, unsigned char pressed );
  void* OnMouse;
  void* OnPlayerPositionChanged;
  void* OnClientClosing;
  void ( *OnInitialize )();
  void* OnConnected;
  void* OnDisconnected;
  void* OnFocusGained;
  void* OnFocusLost;
  void* GetUOFilePath;
  void* Recv;
  void* Send;
  void* GetPacketLength;
  void* GetPlayerPosition;
  void* CastSpell;
  void* GetStaticImage;
  void* Tick;
  void* RequestMove;
  void* SetTitle;

  void* OnRecv_new;
  void* OnSend_new;
  void* Recv_new;
  void* Send_new;

  void* OnDrawCmdList;
  void* SDL_Window;
  void* OnWndProc;
  void* GetStaticData;
  void* GetTileData;
  void* GetCliloc;
};
