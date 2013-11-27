all: main do_circle do_circumference

main: pi.o circle.o circumference.o main.c
	gcc pi.o circle.o circumference.o main.c -o main 

do_circle: pi.o circle.o do_circle.c
	gcc pi.o circle.o do_circle.c -o do_circle

do_circumference: pi.o circumference.o do_circumference.c
	gcc pi.o circumference.o do_circumference.c -o do_circumference

circle.o: pi.h circle.c circle.h
	gcc -c circle.c 

circumference.o: pi.h circumference.c circumference.h
	gcc -c circumference.c 

pi.o: pi.c pi.h
	gcc -c pi.c 

clean:
	rm *.o main do_circle do_circumference
