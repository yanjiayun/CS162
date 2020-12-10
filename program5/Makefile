CC = g++ -std=c++11
exe_file = program5
$(exe_file): program5.o node.o list.o
	$(CC) program5.o node.o list.o -o $(exe_file)
program5.o: program5.cpp
	$(CC) -c program5.cpp
node.o: node.cpp
	$(CC) -c node.cpp
list.o: list.cpp
	$(CC) -c list.cpp
clean:
	rm -f *.out *.o $(exe_file)
