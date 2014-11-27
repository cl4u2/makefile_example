CC=gcc
CFLAGS=-g

all: main do_circumference do_circle

main: main.c circle.o circumference.o pi.o circle.h circumference.h
	$(CC) $(CFLAGS) main.c circle.o circumference.o pi.o -o main

do_circumference: do_circumference.c circumference.o pi.o circumference.h
	$(CC) $(CFLAGS) do_circumference.c circumference.o pi.o -o do_circumference

do_circle: do_circle.c circle.o pi.o circle.h
	$(CC) $(CFLAGS) do_circle.c circle.o pi.o -o do_circle

circumference.o: circumference.c circumference.h pi.h
	$(CC) $(CFLAGS)	-c circumference.c

circle.o: circle.c circle.h pi.h
	$(CC) $(CFLAGS) -c circle.c

pi.o: pi.c pi.h
	$(CC) $(CFLAGS) -c pi.c

clean:
	rm -f *.o main do_circle do_circumference

