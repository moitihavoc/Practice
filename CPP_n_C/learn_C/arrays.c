#include <stdio.h>

int main() {
    int arrays[5] = {1, 3, 4, 5, 6};

    printf("%d\n", arrays[0]);

    for (int i = 0; i < sizeof(arrays) / sizeof(arrays[0]); i++) {
        printf("%d\n", arrays[i]);
    }

    // pointers
    // an array itself has its pointer point to the first element
    // arrays is the pointer.
    // to access the ith element, use array + i, or *(parr + i)
    int *parr = arrays;
    printf("first element: %d\n", *(parr + 1)); // this outputs the same as the statemet below

    printf("first element: %d\n", *arrays);

    // another way to quickly access the elements of an array is arrays[i] or parr[i]

    printf("arrays[2]: %d, is the same as parr[2], and *(parr + 2): %d\n", arrays[2], parr[2]);
    return 0;
}
