#include <stdio.h>
#include <ncurses.h>
#include "audio.h"
#include "command.h"
#include "screen.h"
#include "data.h"

int main(int argc, char **argv)
{
  char *audio_file_name = argc == 2 ? argv[1] : "still_alive.mp3";

  if (audio_init(audio_file_name) != AUDIO_SUCCESS)
  {
    printf("failed to initialize audio\n");
    return 1;
  }
  printf("initialized audio\n");

  if (screen_init() != SCREEN_SUCCESS)
  {
    printf("failed to initialize screen\n");
    return 1;
  }

  command_init();
  data_init();

  while (!command_done())
    command_process();

  audio_cleanup();
  screen_cleanup();

  return 0;
}
