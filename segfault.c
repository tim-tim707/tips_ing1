#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *buffer = malloc(64);

    buffer[64] = 0;
    printf("My cell at index 64 is %d !\n", buffer[64]);

    free(buffer);
    return 0;
}