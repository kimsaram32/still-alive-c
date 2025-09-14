#include "miniaudio.h"
#include "audio.h"

static ma_engine engine;
static ma_sound music;

audio_result_t audio_init(void)
{
  if (ma_engine_init(NULL, &engine) != MA_SUCCESS)
    return AUDIO_FAILURE;
  if (ma_sound_init_from_file(&engine, "still_alive.mp3", 0, NULL, NULL, &music) != MA_SUCCESS)
  {
    audio_cleanup();
    return AUDIO_FAILURE;
  }
  return AUDIO_SUCCESS;
}

void audio_play(void)
{
  ma_sound_start(&music);
}

void audio_cleanup(void)
{
  ma_engine_uninit(&engine);
}
