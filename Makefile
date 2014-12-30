all:main

data.o: data.h data.c
	gcc -Wall -g -c data.c

dlinklist.o: dlinklist.h dlinklist.c
	gcc -Wall -g -c dlinklist.c

main.o: main.c
	gcc -Wall -g -c main.c

main: data.o dlinklist.o main.o
	gcc -Wall -g data.o dlinklist.o main.o -o main

clean:
	rm *.o *~ main