CC = clang
CFLAGS = -O0 -g -Wall -Wextra -pedantic-errors -ferror-limit=10000


all: test

.PHONY: test testcpp
test: tests.c parson.c
	$(CC) $(CFLAGS) -o $@ parson.c tests.c

clean:
	rm -f test *.o

