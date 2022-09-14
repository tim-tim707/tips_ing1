#include <stdlib.h>
#include <stdio.h>

char *allocator(size_t size, char *string) {
    if (size + 1 == 1 + size) {
        puts("I am true");
    }
    int *p = NULL;
    if (*p == 3) {
        puts("It's working !");
    }
    int a;
    int b = a;
    char buf[64] = {};
    return buf;
}

int *better_allocator(size_t size) {
    return malloc(size);
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