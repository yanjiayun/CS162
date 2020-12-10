CC = g++ -std=c++11
exe_file = program4
$(exe_file): program4.o game.o event.o room.o wumpus.o bats.o pit.o gold.o 
	$(CC) program4.o game.o event.o room.o wumpus.o bats.o pit.o gold.o -o $(exe_file) -lncurses
program4.o: program4.cpp
	$(CC) -c program4.cpp
game.o: game.cpp
	$(CC) -c game.cpp
event.o: event.cpp
	$(CC) -c event.cpp
room.o: room.cpp
	$(CC) -c room.cpp
wumpus.o: wumpus.cpp
	$(CC) -c wumpus.cpp
bats.o: bats.cpp
	$(CC) -c bats.cpp
pit.o: pit.cpp
	$(CC) -c pit.cpp
gold.o: gold.cpp
	$(CC) -c gold.cpp
clean:
	rm -f *.out *.o $(exe_file)


