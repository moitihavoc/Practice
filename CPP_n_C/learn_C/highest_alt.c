#include <limits.h>
#include <stdio.h>

int solution(int *gain, int gainSize) {
    int max = 0;
    int alt = 0;

    for (int i = 0; i < gainSize; i++) {
        alt += gain[i];
        max = max > alt ? max : alt;
    }

    return max;
}

int main(void) {
    int g[] = {-5, 1, 5, 0, -7};
    int gs = 5;
    int res = solution(g, gs);

    printf("highest altitude: %d\n", res);
}
