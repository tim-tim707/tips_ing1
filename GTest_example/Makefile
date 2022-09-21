.PHONY: check test compile run

all:
	make test

check test: compile_tests
	@echo [Make] Running tests
	@make run

compile_tests: compile_objects
	@echo [Make] Compiling tests
	g++ `pkg-config --cflags gtest` -c testsuite.cpp
	g++ hello_world.o testsuite.o `pkg-config --libs gtest`

compile_objects:
	@echo [Make] Compiling objects
	gcc hello_world.c -c

compile: compile_objects
	@echo [Make] Compiling main
	gcc hello_world.o main.c
	@make run

run:
	@./a.out
