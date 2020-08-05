// https://stackoverflow.com/a/59596600/9307267
// based on https://stackoverflow.com/a/30269562
// Minimal Pure C code to create a window in Cocoa

// $ clang minimal.c -framework Cocoa -o minimal.app

#include "plugin-header.h"

#include <stdio.h>

extern void installEvents( struct PluginHeader* plugin );

void Install( struct PluginHeader* plugin )
{
  printf( "Got header address %p\n", (void*)&plugin );

  printf( "Client version: %d.%d.%d.%d\n", plugin->ClientVersion >> 24,
          ( plugin->ClientVersion >> 16 ) & 0xFF, ( plugin->ClientVersion >> 8 ) & 0xFF,
          plugin->ClientVersion & 0xFF );

  installEvents( plugin );
}
