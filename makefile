final: laberinto1 laberinto2

laberinto1: laberinto1.o encruta.o
	gcc -W -Wall -o laberinto1 laberinto1.o encruta.o

laberinto1.o: laberinto1.c
	gcc -W -Wall -c laberinto1.c

encruta1.o: encruta1.c
	gcc -W -Wall -c encruta1.c

laberinto2: laberinto2.o encruta1.o
	gcc -W -Wall -o laberinto2 laberinto2.c encruta1.o

laberinto2.o: laberinto2.c laberinto.h encruta1.h
	gcc -W -Wall -c laberinto2.c

oblitera:
	rm -f *.o
	rm -f laberinto1 laberinto2
