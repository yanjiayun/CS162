CC = g++
exe_file = program1
$(exe_file): program1.o func.o
	$(CC) program1.o func.o -o $(exe_file)
lab1.o: program1.cpp
	$(CC) -c program1.cpp
func.o: func.cpp
	$(CC) -c func.cpp

clean:
	rm -f *.out *.o $(exe_file)
