class isSubsequence {
    public boolean isSubsequence(String s, String t) {
        int sub_start = 0;

        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();

        int ns = s_arr.length;
        int os = t_arr.length;

        if (os == 0 && ns == 0) return true;
        if (ns == 0) return true;

        for (int i = 0; i < os; i++) {
            if (t_arr[i] == s_arr[sub_start]) {
                sub_start++;
                if (sub_start == ns) return true;
            }
        }
        return false;
    }
}
