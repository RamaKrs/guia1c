CC = gcc
CFLAGS = -Wall -Wextra -pedantic

tests: tests.o
	$(CC) $(CFLAGS) -o tests tests.o

tests.o: tests.c
	$(CC) $(CFLAGS) -c tests.c

clean:
	rm -f tests.o tests