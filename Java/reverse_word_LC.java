class reverse_word_LC {
    public static String reverse_word(String s) {
        // reverse the order of the words in a sentence
        String[] a = s.trim().split("\\s+");

        StringBuilder sb = new StringBuilder();

        for (int i = a.length - 1; i > 0 || i == 0; i--) {
            sb.append(a[i]);
            if (i != 0) sb.append(" ");
        }

        String res = sb.toString();
        return res;
    }
    public static void main(String[] args) {
        System.out.println("hello");
        String r = reverse_word("a good   example");
        System.out.println(r);
    }
}
