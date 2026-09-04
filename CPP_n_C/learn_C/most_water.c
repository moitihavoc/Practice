#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? a : b)
#define MAX(a, b) (((a) > (b)) ? a : b)

int maxArea(int *height, int heightSize) {
    /*
     * n collumns, constitute a tank with the most amount of water stored.
     * the problems becomes finding the 2 lines that make the greatest pool
     */

    int i;
    int start = 0;
    int end = heightSize - 1;
    int watermax = 0;

    while (start < end) {
        int water = MIN(height[start], height[end]) * (end - start);
        watermax = MAX(water, watermax);
        if (height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    }

    return watermax;
}

int main(void) {
    int hs[] = {1, 1};
    int n = sizeof(hs) / sizeof(hs[0]);
    printf("%d\n", maxArea(hs, n));
}
