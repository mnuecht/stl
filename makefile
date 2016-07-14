CC=g++
FLAGS=-std=c++11

all: run

run: main.o vector.o
	$(CC) $(FLAGS) main.o vector.o -o run

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

vector.o: vector.cpp
	$(CC) $(FLAGS) -c vector.cpp
	
clean:
	rm -rf *.o
	rm -rf run
	
	
