#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

double findMaxAverage(int *nums, int numsSize, int k) {
    // find the continguous subarray with the most average element size
    double sum = 0.0;
    int i = 0;
    int *pi = &i;
    double *psum = &sum;
    double max;

    for (i; i < k; (*pi)++) {
        *psum += nums[i];
    }

    max = sum;

    if (numsSize == 1 || numsSize == k)
        return sum / k;

    for (i; i < numsSize; i++) {
        double curr = sum - nums[i - k] + nums[i];
        max = MAX(max, curr);
        sum = curr;
    }

    return max / k;
}

int main(void) {
    int arr[] = {9, 7, 3, 5, 6, 2, 0, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    printf("max avg: %f \n", findMaxAverage(arr, n, k));
    return 0;
}
