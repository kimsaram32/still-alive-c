#include <stdio.h>
#include "miniaudio.h"
#include "command.h"
#include "data.h"

int main(void)
{
  ma_engine engine;
  if (ma_engine_init(NULL, &engine) != MA_SUCCESS)
  {
    printf("failed to initialize audio engine.\n");
    return 1;
  }
  ma_engine_play_sound(&engine, "still_alive.mp3", NULL);

  command_init();
  data_init();

  while (!command_done())
    command_process();

  ma_engine_uninit(&engine);
  return 0;
}
