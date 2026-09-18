#include <stdio.h>

int solution(int *nums, int numsSize) {
    // return the leftmost pivot index
    // the pivot is where its right sum and left sum are equal
    // if there is no pivot index, return -1;

    int ls = 0;
    int rs = 0;

    for (int i = 0; i < numsSize; i++) {
        rs += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        printf("left: %d vs right: %d\n", ls, rs);
        if (ls == rs - ls - nums[i])
            return i;
        ls += nums[i];
    }

    return -1;
}

int main(void) {
    int nums[] = {1, 2, 3};
    int ns = 3;
    int res = solution(nums, ns);
    printf("pivot index: %d\n", res);

    return 0;
}
