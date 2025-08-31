CC = gcc
CFLAGS = -Wall -Wextra -pedantic

ej9: ej9.o
	$(CC) $(CFLAGS) -o ej9 ej9.o

ej9.o: ej9.c
	$(CC) $(CFLAGS) -c ej9.c

clean:
	rm -f ej9.o ej9