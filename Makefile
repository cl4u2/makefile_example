CC=gcc
CFLAGS=-g

main: chart.o humidity.o temperature.o main.c
	$(CC) $(CFLAGS) chart.o humidity.o temperature.o main.c -o main

print_humidity: chart.o humidity.o print_humidity.c
	$(CC) $(CFLAGS) chart.o humidity.o print_humidity.c -o print_humidity

humidity.o: humidity.c humidity.h
	$(CC) $(CFLAGS) -c humidity.c -o humidity.o

print_temperature: chart.o temperature.o print_temperature.c
	$(CC) $(CFLAGS) chart.o temperature.o print_temperature.c -o print_temperature

temperature.o: temperature.c temperature.h
	$(CC) $(CFLAGS) -c temperature.c -o temperature.o

chart.o: chart.c chart.h
	$(CC) $(CFLAGS) -c chart.c -o chart.o

clean:
	rm *.o print_humidity print_temperature main


