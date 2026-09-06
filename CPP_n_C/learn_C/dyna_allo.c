#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int size = 5;
    int *parr = (int *)malloc(size * sizeof(int)); // allocate 5 bytes of memery to pointer parr

    parr[0] = 1; // assign 1 to memory address 0

    for (int i = 0; i < 5; i++) {
        printf("element #%d: %d\n", i, parr[i]);
    }
    return 0;
}
