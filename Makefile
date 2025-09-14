objects = main.o miniaudio.o ascii.o audio.o command.o data.o screen.o
bin = still_alive

CC = gcc
LDLIBS = -lcurses

$(bin): $(objects)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

main.o: main.c audio.h command.h data.h miniaudio.h screen.h
miniaudio.o: miniaudio.c miniaudio.h
ascii.o: ascii.c ascii.h
audio.o: audio.c audio.h
command.o: command.c audio.h command.h screen.h
data.o: data.c ascii.h command.h data.h
screen.o: screen.c screen.h

.PHONY: clean
clean:
	rm $(bin) $(objects)
