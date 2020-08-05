CFLAGS=-Werror

plugin:
	mkdir -p bin
	clang -framework Cocoa -shared -fpic $(CFLAGS) -o bin/Plugin.dylib src/engine.c src/events.c src/window.c
