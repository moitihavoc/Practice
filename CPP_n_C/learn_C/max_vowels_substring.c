#include <stdio.h>
#include <stdlib.h>
#include <uchar.h>

int maxVowels(char *s, int k) {
    // return the max number of vowels in any substring of length k in string s
    char *curr;
    curr = (char *)malloc(k * s[0]);
    int max = 0;
    int n = 0; // string length
    int *pn = &n;

    while (*s != '\0') {
        *pn++;
    }

    // initiate current substring
    int i;
    for (i = 0; i < k; i++) {
        curr[i] = s[i];
        if (curr[i] == 'a' || curr[i] == 'i' || curr[i] == 'u' || curr[i] == 'e' || curr[i] == 'o')
            max++;
    }

    // check every substring
    for (i = k; i < n; i++) {
        int curr_num = 0;
        for (i = 0; i < k; i++) {
            if (i == k - 1) {
                curr[i] = s[k];
                if (curr[i] == 'a' || curr[i] == 'i' || curr[i] == 'u' || curr[i] == 'e' ||
                    curr[i] == 'o')
                    curr_num++;
                break;
            }
            curr[i] = curr[i + 1];
            if (curr[i] == 'a' || curr[i] == 'i' || curr[i] == 'u' || curr[i] == 'e' ||
                curr[i] == 'o')
                curr_num++;
        }
        max = max > curr_num ? max : curr_num;
    }

    return max;
}

int main(void) {
    char s[] = "leetcode";
    int k = 3;
    int res = maxVowels(s, k);
    printf("max num of vowels in the word %s is %d", s, res);
    return 0;
}
