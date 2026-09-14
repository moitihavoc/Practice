#include <stdio.h>

int longestOnes(int *nums, int numsSize, int k) {
    // return the longest subarray of consecutive 1s if i can flip maximum k 0s.
    //  only flip a 0 if it extends a series of 1s
    int l = 0;
    int r = 0;
    int count = 0;
    int max = 0;

    // extends the window to the max

    for (r = 0; r < numsSize; r++) {
        if (nums[r] == 0) {
            count++;
        }

        while (count > k) {
            if (nums[l] == 0)
                count--;
            l++;
        }

        int curr = r - l + 1;
        max = max > curr ? max : curr;
    }

    // use dynamic sliding windows
    // in each window, there are at most k zeros
    // when there are more than k zeros, l++, and max--;

    return max;
}

int main(void) {
    int nums[] = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    int ns = 19;
    int k = 3;

    int res = longestOnes(nums, ns, k);

    printf("max ones: %d\n", res);
}
