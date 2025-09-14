#ifndef _SCREEN_H
#define _SCREEN_H

typedef enum
{
  SCREEN_SUCCESS,
  SCREEN_FAILURE,
}
screen_result_t;

screen_result_t screen_init(void);
void screen_cleanup(void);

void screen_lyrics_put_char(char);

void screen_lyrics_clear(void);

// pass a null pointer to clear
void screen_pic_set(const char *s);

#endif
