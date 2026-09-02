#include <stdio.h>

int main() {
    int arrays[5] = {1, 3, 4, 5, 6};

    printf("%d\n", arrays[0]);

    for (int i = 0; i < sizeof(arrays) / sizeof(arrays[0]); i++) {
        printf("%d\n", arrays[i]);
    }
}
