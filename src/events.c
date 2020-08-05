#include "plugin-header.h"
#include <stdio.h>

extern void showWindow();

void OnInitialize();
void OnHotkeyPressed( int key, int mod, unsigned char pressed );

void installEvents( struct PluginHeader* plugin )
{
  plugin->OnInitialize = OnInitialize;
  plugin->OnHotkeyPressed = OnHotkeyPressed;
}

void OnInitialize()
{
  printf( "OnInitialize\n" );
  showWindow();
}

void OnHotkeyPressed( int key, int mod, unsigned char pressed )
{
  printf( "OnHotkeyPressed key=%d mod=%d pressed=%s\n", key, mod, pressed ? "true" : "false" );
}
