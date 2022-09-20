#include <stdlib.h>
#include <stdio.h>

char *allocator(size_t size, char *string) {
    if (size == 4) {
        puts("I am true");
    }
    else if (size == 4) { // Should appear as a linter warning
        puts("what");
    }
    int *p = NULL;
    if (*p == 3) {
        puts("It's working !");
    }
    int a;
    int b = a;
    char buf[64] = { 0 };
    return buf;
}

int *better_allocator(size_t size) {
    return malloc(size);
}

int truc() {
    return 0;
}

int main(void) {
    int *bytes = better_allocator(32);
    printf("I allocated %zu bytes !\n", bytes);
    if (bytes[0] == 41) {
        puts("Error happened !");
        return 1;
    }
    free(bytes);
    return 0;
}