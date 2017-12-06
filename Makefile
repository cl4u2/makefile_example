# For makefiles in vim
# :set noexpandtab
# :set list
# :set nolist

all: print_temperature print_humidity

charts.o: charts.c charts.h
	gcc -c charts.c -o charts.o

temperature.o: temperature.c temperature.h
	gcc -c temperature.c -o temperature.o

humidity.o: humidity.c humidity.h
	gcc -c humidity.c -o humidity.o

print_temperature: print_temperature.c temperature.o charts.o
	gcc print_temperature.c temperature.o charts.o -o print_temperature

print_humidity: print_humidity.c humidity.o charts.o
	gcc print_humidity.c humidity.o charts.o -o print_humidity

clean:
	rm *.o print_temperature print_humidity

