#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include "audio.h"
#include "screen.h"
#include "command.h"

#define COMMAND_MAX_SIZE 2000

command_ms_t command_last_time;

static command_t commands[COMMAND_MAX_SIZE];
static int commands_length = 0;

static int current_command_index;
static command_ms_t start_time;

static command_ms_t get_current_time(void)
{
  struct timespec ts;
  if (!timespec_get(&ts, TIME_UTC))
    return -1;
  return ts.tv_sec * 1000 + ts.tv_nsec / 1000000;
}

void command_init(void)
{
  start_time = get_current_time();
  current_command_index = 0;
}

int command_done(void)
{
  return current_command_index >= commands_length;
}

void command_process(void)
{
  command_ms_t time_elapsed = get_current_time() - start_time;

  for (
    command_t cmd;
    current_command_index < commands_length &&
    (cmd = commands[current_command_index]).target_time <= time_elapsed;
    current_command_index++
  )
  {
    switch (cmd.type)
    {
      case COMMAND_TYPE_CHAR:
        screen_lyrics_put_char(cmd.c);
        break;
      case COMMAND_TYPE_PIC:
        screen_pic_set(cmd.pic);
        break;
      case COMMAND_TYPE_CLEAR:
        screen_lyrics_clear();
        break;
      case COMMAND_TYPE_AUDIO:
        audio_play();
        break;
    }
  }
  fflush(stdout);
}

void command_add_chars(char *s, command_ms_t start, command_ms_t delay)
{
  command_ms_t target_time;

  for (target_time = start; *s; s++, target_time += delay)
  {
    commands[commands_length].type = COMMAND_TYPE_CHAR;
    commands[commands_length].target_time = target_time;
    commands[commands_length++].c = *s;
  }

  command_last_time = target_time;
}

void command_add_pic(const char *pic, command_ms_t time)
{
  commands[commands_length].type = COMMAND_TYPE_PIC;
  commands[commands_length].target_time = time;
  commands[commands_length].pic = pic;

  commands_length++;
  command_last_time = time;
}

void command_add(command_type_t type, command_ms_t time)
{
  commands[commands_length].type = type;
  commands[commands_length].target_time = time;
  commands_length++;
  command_last_time = time;
}
