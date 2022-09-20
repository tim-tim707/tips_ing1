CFLAGS = "-g -fsanitize=address"

.PHONY: compile

all:
	echo Compiling main.c
	mkdir test
	rm -r test
	make compile

compile:
	gcc $(CFLAGS) main.c

hello:
	echo "Hello world"

segfault:
	gcc -g -fsanitize=address segfault.c
	./a.out