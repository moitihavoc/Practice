#include <stdbool.h>
#include <stdio.h>

bool isVowels(char c) { return c == 'a' || c == 'i' || c == 'e' || c == 'u' || c == 'o'; }

int maxVowels(char *s, int k) {
    // return the max number of vowels in any substring of length k in string s
    // initiate initial substring
    // count the current number of vowels
    // let that be the current max
    // starting from kth letter, remove the (i-k)th letter and add the kth letter to the last
    // count vowels, comp with max.
    int curr_num = 0;
    // int i = 0;

    for (int i = 0; i < k; i++) {
        if (isVowels(s[i]))
            curr_num++;
    }

    int max_num = curr_num;

    for (int i = k; s[i] != '\0'; i++) {
        if (isVowels(s[i - k]))
            curr_num--;
        if (isVowels(s[i]))
            curr_num++;
        max_num = max_num > curr_num ? max_num : curr_num;
    }

    return max_num;
}

int main(void) {
    char s[] = "leetcode";
    int k = 3;
    int res = maxVowels(s, k);
    printf("max num of vowels in the word %s is %d\n", s, res);
    return 0;
}
