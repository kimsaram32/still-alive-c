#include <stdint.h>

#ifndef _COMMAND_H
#define _COMMAND_H

typedef int64_t command_ms_t;

typedef enum
{
  COMMAND_TYPE_CHAR,
  COMMAND_TYPE_PIC,
  COMMAND_TYPE_CLEAR,
  COMMAND_TYPE_AUDIO,
}
command_type_t;

typedef struct
{
  command_ms_t target_time;
  command_type_t type;
  char c;
  const char *pic;
}
command_t;

extern command_ms_t command_last_time;

void command_init(void);
int command_done(void);
void command_process(void);

void command_add_chars(char *s, command_ms_t start, command_ms_t typing_speed);
void command_add_pic(const char *pic, command_ms_t time);
void command_add(command_type_t type, command_ms_t time);

#endif
