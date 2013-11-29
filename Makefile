CC=gcc
CFLAGS=-O2 
LDFLAGS=-lm

#i commenti vengono ignorati

all: do_circumference do_circle

do_circumference: circumference.o pi.o do_circumference.c
	$(CC) $(CFLAGS) circumference.o pi.o do_circumference.c -o do_circumference

circumference.o: circumference.c circumference.h 
	$(CC) $(CFLAGS) -c circumference.c -o circumference.o

do_circle: circle.o pi.o do_circle.c
	$(CC) $(CFLAGS) $(LDFLAGS) circle.o pi.o do_circle.c -o do_circle

circle.o: circle.c circle.h
	$(CC) $(CFLAGS) -c circle.c -o circle.o

pi.o: pi.c pi.h
	$(CC) $(CFLAGS) -c pi.c -o pi.o

debug_circumference: circumference.o pi.o do_circumference.c
	$(CC) $(CFLAGS) -DNDEBUG circumference.o pi.o do_circumference.c -o do_circumference

clean:
	rm *.o do_circle do_circumference
