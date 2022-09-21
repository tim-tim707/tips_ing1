# Tips & Tricks for Epita piscine and Ing1, as well as code quality overall

# main.c file
This file provide an example for warnings and Clang-tidy (or CppCheck) linter

# segfault.c file
This file provide an example of a dangerous code that can be debugged with the
address sanitizer

# Makefile
This example file provide commands to compile main.c, segfault.c and run
basic commands.

# Pre-commit
Pre-commit is installed like so:
`pip install pre-commit && pre-commit install`
The `.pre-commit-config.yaml` is already filled with examples such as remote
hooks clang-format, and custom hooks `custom_precommit.sh` & `custom_precommit_failing.sh`

# GTest_example directory
This directory gives an example of a possible GTest configuration to test C
functions. A Makefile is provided to compile both the program and the tests and
run them.

# Integration_example directory
This directory gives an example of an integration test runner taking a yml as testsuite and an executable to test as argument. It provides a diff of the expected output and the actual result

# Slides.pdf
Self-explanatory
