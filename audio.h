#ifndef _AUDIO_H
#define _AUDIO_H

typedef enum
{
  AUDIO_SUCCESS,
  AUDIO_FAILURE,
}
audio_result_t;

audio_result_t audio_init(void);
void audio_play(void);
void audio_cleanup(void);

#endif
