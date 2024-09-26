CC=g++
FLAGS=-O3 -Wall

all: point2D.o testepoint

point2D.o: point2D.cpp point2D.hpp
	${CC} ${FLAGS} point2D.cpp -c

testepoint: main.cpp point2D.o
	${CC} ${FLAGS} main.cpp point2D.o -o testepoint

clean:
	rm -f *.o testepoint
