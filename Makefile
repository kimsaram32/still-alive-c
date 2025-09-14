objects = main.o miniaudio.o command.o data.o
bin = still_alive

CC = gcc

$(bin): $(objects)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

main.o: main.c miniaudio.h command.h data.h
miniaudio.o: miniaudio.c miniaudio.h
command.o: command.c command.h
data.o: data.c data.h command.h

.PHONY: clean
clean:
	rm $(bin) $(objects)
