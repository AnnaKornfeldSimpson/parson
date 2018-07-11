CC = clang
CFLAGS = -O0 -g -Wall -Wextra -pedantic-errors -ferror-limit=1000


all: test testchecked

.PHONY: test testchecked
test: tests.c parson.c
	$(CC) $(CFLAGS) -o $@ parson.c tests.c

testchecked: parson.checked.c tests.c
	$(CC) $(CFLAGS) -o $@ parson.checked.c tests.c

clean:
	rm -f test testchecked *.o

