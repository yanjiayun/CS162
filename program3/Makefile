CC = g++ -std=c++11
exe_file = program3
$(exe_file): program3.o animal.o monkey.o sea.o meerkat.o zoo.o
	$(CC) program3.o animal.o monkey.o sea.o meerkat.o zoo.o -o $(exe_file)
program3.o: program3.cpp
	$(CC) -c program3.cpp
animal.o: animal.cpp
	$(CC) -c animal.cpp
monkey.o: monkey.cpp
	$(CC) -c monkey.cpp
sea.o: sea.cpp
	$(CC) -c sea.cpp
meerkat.o: meerkat.cpp
	$(CC) -c meerkat.cpp
zoo.o: zoo.cpp
	$(CC) -c zoo.cpp
clean:
	rm -f *.out *.o $(exe_file)


