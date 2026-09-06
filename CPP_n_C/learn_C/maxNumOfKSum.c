#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x > y)
        return 1;
    else if (x < y)
        return -1;
    return 0;
}

int maxOperations(int *nums, int numSize, int k) {
    int count = 0;
    int start = 0;
    int end = numSize - 1;

    qsort(nums, numSize, sizeof(int), compare);

    while (start < end) {
        int sum = nums[start] + nums[end];
        if (sum > k)
            end--;
        else if (sum < k)
            start++;
        else {
            count++;
            start++;
            end--;
        }
    }

    return count;
}

int main(void) {
    int num[] = {3, 5, 1, 5};
    int n = sizeof(num) / sizeof(num[0]);
    int res = maxOperations(num, n, 2);

    printf("%d\n", res);
}
