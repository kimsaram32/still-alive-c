# Still Alive in C

'Still Alive' from Portal with lyrics implemented in C.

## Playing

### Platforms

Tested on macOS and Linux.
Untested on Windows; use WSL probably

### Prerequisites

- GNU make
- ncurses

You should also grab 'Still Alive' audio file from [The Orange Box OST](https://half-life.fandom.com/wiki/The_Orange_Box_soundtrack).
Any supported format by [miniaudio](https://github.com/mackron/miniaudio) is supported.

### Steps

Build the project with `make`:
```sh
$ make
```

This builds the program into a binary named `still_alive`.

Run the program as follows:
```sh
$ still_alive [path_to_audio]
```
If `path_to_audio` is not supplied, the program uses `still_alive.mp3` in the current directory (it will terminate if it's not found).
