class TripletSubsequence {
    public boolean increasingTriplet(int[] nums) {
        // verify if there exists 3 idx: i<j<k such that their values also hold the same relation
        int small = Integer.MAX_VALUE;
        int big = Integer.MAX_VALUE;

        for (int n: nums) {
            if (n <= small) small = n;
            else if (n <= big) big = n;
            else return true; // if there exist a number larger than both then return true
        }
        return false;
    }

}
