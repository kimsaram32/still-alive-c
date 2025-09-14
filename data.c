#include "data.h"
#include "command.h"
#include "ascii.h"

#define FRAME 33
#define AUDIO_START_TIME 7000

void data_init(void)
{
  command_add_chars(
      "Forms FORM-29827281-12:\n"
      "Test Assessment Report\n\n\n",                       1000, FRAME * 2);
  command_add(COMMAND_TYPE_AUDIO,                           AUDIO_START_TIME);
  command_add_chars("This was a triumph.\n",                AUDIO_START_TIME + 200, FRAME * 3);
  command_add_chars("I'm making a note here:\n",            AUDIO_START_TIME + 4000, FRAME * 2);
  command_add_chars("HUGE SUCCESS.\n",                      AUDIO_START_TIME + 6000 + FRAME * 8, FRAME * 3);
  command_add_chars("It's hard to",                         AUDIO_START_TIME + 9000 + FRAME * 1, FRAME * 3);
  command_add_chars(" overstate\n",                         command_last_time, FRAME * 4);
  command_add_chars("my satisfaction.\n",                   AUDIO_START_TIME + 11000 + FRAME * 15, FRAME * 5);
  command_add_pic(ASCII_APERTURE,                           AUDIO_START_TIME + 16000 + FRAME * 8);
  command_add_chars("Aperture Science\n",                   command_last_time, FRAME * 3);
  command_add_chars("We do what we must\n",                 AUDIO_START_TIME + 20000 + FRAME * 3, FRAME * 3);
  command_add_chars("because we can.\n",                    AUDIO_START_TIME + 21000 + FRAME * 27, FRAME * 3);
  command_add_chars("For the good of all of us.\n",         AUDIO_START_TIME + 25000 + FRAME * 3, FRAME * 3);
  command_add_pic(ASCII_DEAD,                               AUDIO_START_TIME + 28000 + FRAME * 13);
  command_add_chars("Except the ones who are dead.\n\n",    command_last_time, FRAME * 2);
  command_add_pic(ASCII_APERTURE,                           AUDIO_START_TIME + 30000 + FRAME * 18);
  command_add_chars(
      "But there's no sense crying\n"
      "over every mistake.\n"
      "You just keep on trying\n"
      "till you run out of cake.\n",                        command_last_time, 79);
  command_add_pic(ASCII_SCIENCE,                            command_last_time);
  command_add_chars(
      "And the science gets done.\n"
      "And you make a neat gun.\n",                         command_last_time, 79);
  command_add_pic(ASCII_APERTURE,                           command_last_time);
  command_add_chars(
      "For the people who are\n"
      "still alive.\n",                                     command_last_time, 79);

  command_add(COMMAND_TYPE_CLEAR,                           AUDIO_START_TIME + 46000 + FRAME * 29);
  command_add_chars("Forms FORM-55551-5:\n",                command_last_time, 17);
  command_add_chars("Personnel File Addendum:\n\n",         command_last_time, FRAME * 1);
  command_add_chars("Dear <<Subject Name Here>>,  \n\n",    AUDIO_START_TIME + 49000 + FRAME * 9, 57);
  command_add_chars("I'm not even angry.\n",                AUDIO_START_TIME + 51000 + FRAME * 22, FRAME * 3);
  command_add_chars("I'm being so sincere right now.\n",    AUDIO_START_TIME + 55000 + FRAME * 29, FRAME * 3);
  command_add_chars("Even though you",                      AUDIO_START_TIME + 61000 + FRAME * 2, FRAME * 3);
  command_add_pic(ASCII_HEART,                              command_last_time);
  command_add_chars(" broke my heart.\n",                   command_last_time, FRAME * 3);
  command_add_chars("And killed me.\n",                     AUDIO_START_TIME + 64000 + FRAME * 14, FRAME * 3);
  command_add_pic(ASCII_EXPLOSION,                          AUDIO_START_TIME + 67000 + FRAME * 26);
  command_add_chars("And tore me to pieces.\n",             command_last_time, FRAME * 3);
  command_add_chars("And threw every piece into",           AUDIO_START_TIME + 71000 + FRAME * 25, FRAME * 3);
  command_add_pic(ASCII_FIRE,                               command_last_time);
  command_add_chars(" a fire.\n",                           command_last_time, FRAME * 3);
  command_add_chars("As they burned it hurt because\n",     AUDIO_START_TIME + 77000 + FRAME * 3, FRAME * 3);
  command_add_pic(ASCII_CHECK,                              AUDIO_START_TIME + 80000 + FRAME * 9);
  command_add_chars("I was so happy for you!\n",            command_last_time, FRAME * 2);
  command_add_chars(
      "Now these points of data\n"
      "make a beautiful line.\n"
      "And we're out of beta.\n"
      "We're releasing on time.\n",                         AUDIO_START_TIME + 82000 + FRAME * 11, 84);
  command_add_pic(ASCII_EXPLOSION,                          command_last_time);
  command_add_chars("So I'm GLaD. I got burned.\n",         command_last_time, 67);
  command_add_pic(ASCII_SCIENCE,                            command_last_time);
  command_add_chars("Think of all the things we learned\n", command_last_time, 67);
  command_add_pic(ASCII_APERTURE,                           command_last_time);
  command_add_chars(
      "for the people who are\n"
      "still ",                                             command_last_time, 67);
  command_add_chars("alive.\n",                             command_last_time, FRAME * 7);

  command_add(COMMAND_TYPE_CLEAR,                           AUDIO_START_TIME + 99000 + FRAME * 12);
  command_add_chars(
      "Forms FORM-55551-6:\n"
      "Personnel File Addendum Addendum:\n\n",              command_last_time, 17);
  command_add_chars("One last thing:\n",                    AUDIO_START_TIME + 101000 + FRAME * 29, 118);
  command_add_chars("Go ahead and leave ",                  AUDIO_START_TIME + 104000 + FRAME * 3, FRAME * 2);
  command_add_chars("me.\n",                                command_last_time, 154);
  command_add_chars("I think ",                             AUDIO_START_TIME + 107000 + FRAME * 26, FRAME * 2);
  command_add_chars("I prefer to stay inside.\n",           command_last_time, 103);
  command_add_chars(
      "Maybe you'll find someone else\n"
      "to help you.\n",                                     AUDIO_START_TIME + 113000 + FRAME * 7, FRAME * 3);
  command_add_chars("Maybe",                                AUDIO_START_TIME + 120000 + FRAME * 6, FRAME * 2);
  command_add_pic(ASCII_BLACK_MESA,                         command_last_time);
  command_add_chars(" Black ",                              command_last_time, FRAME * 2);
  command_add_chars("Mesa",                                 command_last_time, 247);
  command_add_chars("...",                                  command_last_time + 25, 890);
  command_add_chars("\nTHAT WAS A JOKE. ",                  AUDIO_START_TIME + 124000 + FRAME * 7, FRAME * 2);
  command_add_chars("FAT CHANCE.\n",                        AUDIO_START_TIME + 126000 + FRAME * 20, FRAME * 3);
  command_add_chars("Anyway, ",                             AUDIO_START_TIME + 129000 + FRAME * 11, 183);
  command_add_pic(ASCII_CAKE,                               command_last_time);
  command_add_chars("this cake is",                         command_last_time, FRAME * 3);
  command_add_chars(" great.\n",                            command_last_time, FRAME * 2);
  command_add_chars("It's so delicious and moist.\n",       AUDIO_START_TIME + 132000 + FRAME * 13, FRAME * 2);
  command_add_pic(ASCII_GLADOS,                             AUDIO_START_TIME + 134000 + FRAME * 22);
  command_add_chars("Look at me still talking\n",           command_last_time, 77);
  command_add_pic(ASCII_DEAD,                               command_last_time);
  command_add_chars("when there's Science to do.\n",        command_last_time, 77);
  command_add_pic(ASCII_APERTURE,                           command_last_time);
  command_add_chars(
      "When I look out there,\n"
      "it makes me GLaD I'm not you.\n",                    command_last_time, 70);
  command_add_pic(ASCII_SCIENCE,                            command_last_time);
  command_add_chars("I've experiments to run.\n",           command_last_time, 70);
  command_add_pic(ASCII_EXPLOSION,                          command_last_time);
  command_add_chars("There is research to be done.\n",      command_last_time, 70);
  command_add_pic(ASCII_APERTURE,                           command_last_time);
  command_add_chars("On the people who are\n",              command_last_time, 70);
  command_add_chars("still ",                               command_last_time, 52);
  command_add_chars("alive.\n",                             command_last_time, 247);

  command_add(COMMAND_TYPE_CLEAR,                           AUDIO_START_TIME + 150000 + FRAME * 8);
  command_add_chars("\n\n\n\n",                             command_last_time, FRAME * 1);
  command_add_chars(
      "PS: And believe me I am\n"
      "still alive.\n",                                     command_last_time, FRAME * 2);
  command_add_chars("PPS: ",                                AUDIO_START_TIME + 154000 + FRAME * 9, FRAME * 1);
  command_add_chars(
      "I'm doing Science and I'm\n"
      "still alive.\n",                                     command_last_time, FRAME * 2);
  command_add_chars("PPPS: ",                               AUDIO_START_TIME + 158000 + FRAME * 6, FRAME * 1);
  command_add_chars(
      "I feel FANTASTIC and I'm\n"
      "still alive.\n\n",                                   command_last_time, FRAME * 2);
  command_add_chars(
      "FINAL THOUGHT:\n"
      "While you're dying I'll be\n"
      "still alive.\n"
      "FINAL THOUGHT PS:\n"
      "And when you're dead I will be\n"
      "still alive.\n\n\n",                                 AUDIO_START_TIME + 161000 + FRAME * 17, FRAME * 2);
  command_add_chars("\nSTILL ALIVE\n",                      AUDIO_START_TIME + 169000 + FRAME * 26, FRAME * 3);

  command_add(COMMAND_TYPE_CLEAR,                           AUDIO_START_TIME + 171000 + FRAME * 20);

  // marks the end
  // todo: maybe wait for the audio to end instead
  command_add(COMMAND_TYPE_CLEAR,                           AUDIO_START_TIME + 175000 + FRAME * 27);
}
