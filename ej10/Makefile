CC = gcc
CFLAGS = -Wall -Wextra -pedantic

ej10: ej10.o
	$(CC) $(CFLAGS) -o ej10 ej10.o

ej10.o: ej10.c
	$(CC) $(CFLAGS) -c ej10.c

clean:
	rm -f ej10.o ej10