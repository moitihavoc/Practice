#include <stdio.h>

int main(void) {
    int *ip;
    int x = 0;
    ip = &x;
    *ip++;

    printf("%p\n", (void *)ip);
    printf("pointer: %d\n", *ip);
    printf("x: %d\n", x);
}
