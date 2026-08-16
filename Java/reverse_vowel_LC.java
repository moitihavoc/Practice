class Solution {
    public String reverseVowels(String s) {
        // solved using 2 pointers that keep tracks of vowels in the beginning and end of list

        char[] input = s.toCharArray();
        int start = 0;
        int end = input.length - 1;

        while (start < end){
            while (!(isVow(input[start])) && (start < end)) {
                start++;
            }
            while (!(isVow(input[end])) && (start < end)) {
                end--;
            }
            
            if(isVow(input[start]) && isVow(input[end])) {
                char temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }
        }

        return String.valueOf(input);
        
    }
    static void swap(char[] s, int i,  int j) {
        
    }
    static boolean isVow(char c) {
        char cc = Character.toLowerCase(c);
        return cc == 'a' ||
        cc == 'i' ||
        cc =='u' ||
        cc == 'e' ||
        cc == 'o';
    }


    public static void main(String args[]){
        String par = "leetcode";
        Solution ob = new Solution();
        System.out.println(ob.reverseVowels(par));
        System.out.println(par);

    }
}

