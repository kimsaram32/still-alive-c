#include "command.h"

#define FRAME 33

void data_init(void)
{
  command_add_chars("This was a triumph.\n", 200, FRAME * 3);
  command_add_chars("I'm making a note here:\n", 4000, FRAME * 2);
  command_add_chars("HUGE SUCCESS.\n", 6000 + FRAME * 8, FRAME * 3);
  command_add_chars("It's hard to", 9000 + FRAME * 1, FRAME * 3);
  command_add_chars(" overstate\n", command_last_time, FRAME * 4);
  command_add_chars("my satisfaction.\n", 11000 + FRAME * 15, FRAME * 5);
  command_add_chars("Aperture Science\n", 16000 + FRAME * 8, FRAME * 3);
  command_add_chars("We do what we must\n", 20000 + FRAME * 3, FRAME * 3);
  command_add_chars("because we can.\n", 21000 + FRAME * 27, FRAME * 3);
  command_add_chars("For the good of all of us.\n", 25000 + FRAME * 3, FRAME * 3);
  command_add_chars("Except the ones who are dead.\n\n", 28000 + FRAME * 13, FRAME * 2);
  command_add_chars(
      "But there's no sense crying\n"
      "over every mistake.\n"
      "You just keep on trying\n"
      "till you run out of cake.\n"
      "And the science gets done.\n"
      "And you make a neat gun.\n"
      "For the people who are\n"
      "still alive.\n", 30000 + FRAME * 18, 79);

  command_add_clear(46000 + FRAME * 29);
  command_add_chars("Forms FORM-55551-5:\n", command_last_time, 17);
  command_add_chars("Personnel File Addendum:\n\n", command_last_time, FRAME * 1);
  command_add_chars("Dear <<Subject Name Here>>,\n\n", 49000 + FRAME * 9, 57);
  command_add_chars("I'm not even angry.\n", 51000 + FRAME * 22, FRAME * 3);
  command_add_chars("I'm being so sincere right now.\n", 55000 + FRAME * 29, FRAME * 3);
  command_add_chars("Even though you broke my heart.\n", 61000 + FRAME * 2, FRAME * 3);
  command_add_chars("And killed me.\n", 64000 + FRAME * 14, FRAME * 3);
  command_add_chars("And tore me to pieces.\n", 67000 + FRAME * 26, FRAME * 3);
  command_add_chars("And threw every piece into a fire.\n", 71000 + FRAME * 25, FRAME * 3);
  command_add_chars("As they burned it hurt because\n", 77000 + FRAME * 3, FRAME * 3);
  command_add_chars("I was so happy for you!\n", 80000 + FRAME * 9, FRAME * 2);
  command_add_chars(
      "Now these points of data\n"
      "make a beautiful line.\n"
      "And we're out of beta.\n"
      "We're releasing on time.\n",
      82000 + FRAME * 11, 84);
  command_add_chars(
      "So I'm GLaD. I got burned.\n"
      "Think of all the things we learned\n"
      "for the people who are\n"
      "still ", command_last_time, 67);
  command_add_chars("alive.\n", command_last_time, FRAME * 7);

  command_add_clear(99000 + FRAME * 12);
  command_add_chars("Forms FORM-55551-6:\nPersonnel File Addendum Addendum:\n\n", command_last_time, 17);
  command_add_chars("One last thing:\n", 101000 + FRAME * 29, 118);
  command_add_chars("Go ahead and leave ", 104000 + FRAME * 3, FRAME * 2);
  command_add_chars("me.\n", command_last_time, 154);
  command_add_chars("I think ", 107000 + FRAME * 26, FRAME * 2);
  command_add_chars("I prefer to stay inside.\n", command_last_time, 103);
  command_add_chars("Maybe you'll find someone else\nto help you.\n", 113000 + FRAME * 7, FRAME * 3);
  command_add_chars("Maybe Black ", 120000 + FRAME * 6, FRAME * 2);
  command_add_chars("Mesa", command_last_time, 247);
  command_add_chars("...", command_last_time + 25, 890);
  command_add_chars("\nTHAT WAS A JOKE. ", 124000 + FRAME * 7, FRAME * 2);
  command_add_chars("FAT CHANCE.\n", 126000 + FRAME * 20, FRAME * 3);
  command_add_chars("Anyway, ", 129000 + FRAME * 11, 183);
  command_add_chars("this cake is", command_last_time, FRAME * 3);
  command_add_chars(" great.\n", command_last_time, FRAME * 2);
  command_add_chars("It's so delicious and moist.\n", 132000 + FRAME * 13, FRAME * 2);
  command_add_chars(
      "Look at me still talking\n"
      "when there's Science to do.\n",
      134000 + FRAME * 22, 77);
  command_add_chars(
      "When I look out there,\n"
      "it makes me GLaD I'm not you.\n"
      "I've experiments to run.\n"
      "There is research to be done.\n"
      "On the people who are\n", command_last_time, 70);
  command_add_chars("still ", command_last_time, 52);
  command_add_chars("alive.\n", command_last_time, 247);

  command_add_clear(150000 + FRAME * 8);
  command_add_chars("\n\n\n\n", command_last_time, FRAME * 1);
  command_add_chars("PS: And believe me I am\nstill alive.\n", command_last_time, FRAME * 2);
  command_add_chars("PPS: ", 154000 + FRAME * 9, FRAME * 1);
  command_add_chars("I'm doing Science and I'm\nstill alive.\n", command_last_time, FRAME * 2);
  command_add_chars("PPPS: ", 158000 + FRAME * 6, FRAME * 1);
  command_add_chars("I feel FANTASTIC and I'm\nstill alive.\n\n", command_last_time, FRAME * 2);
  command_add_chars(
      "FINAL THOUGHT:\n"
      "While you're dying I'll be\n"
      "still alive.\n"
      "FINAL THOUGHT PS:\n"
      "And when you're dead I will be\n"
      "still alive.\n\n\n",
      161000 + FRAME * 17, FRAME * 2);
  command_add_chars("\nSTILL ALIVE\n", 169000 + FRAME * 26, FRAME * 3);

  command_add_clear(171000 + FRAME * 20);

  // marks the end
  // todo: wait for the audio to end instead
  command_add_clear(175000 + FRAME * 27);
}
