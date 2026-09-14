#include <stdio.h>

int solution(int *nums, int numsSize, int k) {
    // keep track of the number of 1 and 0 inside an array.
    // if num of zero exceed k, shrink the window from the left (start)
    // max num of ones is equal to the sum of valid num of zeros and num of ones.
    int max = 0;
    int count[] = {0, 0};
    int start = 0;

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
        if (nums[i] == 0 && count[nums[i]] > k) {
            while (count[nums[i]] > k) {
                count[nums[start]]--;
                start++;
            }
        }
        max = max > (count[0] + count[1]) ? max : (count[0] + count[1]);
    }

    return max;
}

int main(void) {
    int nums[] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int res = solution(nums, 10, 2);
    printf("max ones is: %d\n", res);
}
