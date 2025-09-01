CC = gcc
CFLAGS = -Wall -Wextra -pedantic

ej15: ej15.o
	$(CC) $(CFLAGS) -o ej15 ej15.o

ej15.o: ej15.c
	$(CC) $(CFLAGS) -c ej15.c

clean:
	rm -f ej15.o ej15