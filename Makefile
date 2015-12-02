CC=gcc
CFLAGS=-g

default: main do_circumference do_circle

main: main.c circle.o circumference.o pi.o circle.h circumference.h
	$(CC) $(CFLAGS) circle.o circumference.o pi.o main.c -o main

do_circumference: circumference.o pi.o do_circumference.c circumference.h
	$(CC) $(CFLAGS) circumference.o pi.o do_circumference.c -o do_circumference

do_circle: circle.o pi.o do_circle.c circle.h
	$(CC) $(CFLAGS) circle.o pi.o do_circle.c -o do_circle

circumference.o: circumference.c circumference.h pi.h 
	$(CC) $(CFLAGS) -c circumference.c -o circumference.o

circle.o: circle.c circle.h pi.h
	$(CC) $(CFLAGS) -c circle.c -o circle.o

pi.o: pi.c pi.h
	$(CC) $(CFLAGS) -c pi.c -o pi.o

clean:
	rm *.o main do_circumference do_circle











