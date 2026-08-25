
class MoveZero {
    
    public static void solution(int[] nums) {
        // Classic 2 pointer problem: swap all zeros to the end & maintain the relative order
        // anything related to swaps and tracking the position of many elements
        int zero = 0;
        int nonzero = 0;

        while (true) {
            try{
                while (nums[zero] != 0) zero++;
                while (nums[nonzero] == 0) nonzero++;

                if (nums[zero] == 0 && zero < nonzero) {
                    nums[zero] = nums[nonzero];
                    nums[nonzero] = 0;
                }
            } catch (IndexOutOfBoundsException e) {
                return;
            }
        }
    }

    public static void main(String[] args) {
        int[] test = {1,0};
        solution(test);
        for (int n: test){
            System.out.printf("%d ", n);
        }
    }
}
