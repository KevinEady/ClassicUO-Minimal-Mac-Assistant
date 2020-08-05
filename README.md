# ClassicUO-Minimal-Mac-Assistant

This is a very simple Mac OS X-only Assistant. The primary goal is to showcase a
Mac-only behavior where ClassicUO triggers the `OnHotkeyPressed` event, even
when the assistant window is in focus:

![Hotkeys Example](https://user-images.githubusercontent.com/8634912/89477102-aca35500-d78c-11ea-8cd3-5392cdc526e1.gif)

## Usage

```
./run.sh [-d|--debug] [path to ClassicUO.exe]
```

If no path is provided, defaults to `../ClassicUO/bin/Debug/ClassicUO.exe`

You can also run `make` and as normal, set your ClassicUO Assistant plugin to
the generated library `bin/Plugin.dylib`.
