CFLAGS = -g -fsanitize=address

.PHONY: compile hello segfault help

all:
	@echo Compiling main.c
	mkdir test
	rm -r test
	make compile

compile:
	gcc $(CFLAGS) main.c && ./a.out

hello:
	echo "Hello world"

segfault:
	gcc -g -fsanitize=address segfault.c
	./a.out

help:
	@echo "Available options: help, hello, compile, segfault, all (compiles)"
