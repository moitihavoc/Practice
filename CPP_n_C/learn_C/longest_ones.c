#include <stdio.h>

int longestSubarray(int *nums, int numsSize) {
    // return the size of the longest subarray of 1s
    // one 0 can be deleted to make the array longer
    // count 1 and 0, 0 count can never exceed 1

    int ones = 0;
    int zeros = 0;
    int start = 0;
    int max = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            ones++;
        else
            zeros++;

        if (zeros > 1) {
            while (zeros > 1 && start <= i) {
                if (nums[start] == 1) {
                    ones--;
                } else {
                    zeros--;
                }
                start++;
            }
        }

        max = max > ones ? max : ones;
    }

    if (zeros == 0)
        return max - 1;

    return max;
}

int main(void) {
    int nums[] = {1, 1, 0, 1};
    int ns = 4;
    int res = longestSubarray(nums, ns);

    printf("longest subbarry with only 1 has size: %d\n", res);
}
