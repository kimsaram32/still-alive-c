objects = main.o miniaudio.o command.o data.o
bin = still_alive

$(bin): $(objects)
	$(CC) -o $(bin) $(objects)

main.o: main.c
miniaudio.o: miniaudio.c
command.o: command.c
data.o: data.c

.PHONY: clean
clean:
	rm $(bin) $(objects)
