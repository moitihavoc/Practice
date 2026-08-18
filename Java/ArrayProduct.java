import java.util.ArrayList;
import java.util.List;

class ArrayProduct {

    public int[] solutionExceptSelf(int[] nums) {
        // return answer array given that answer[i] = product of all elements except nums[i]
        // O(n), no use of division
        
        int n = nums.length;
        List<Integer> prods = new ArrayList<>();
        int[] answer = new int[n];
        int start = 0;
        int preprod = 1;
        int end = n - 1;
        int postprod = 1;

        for (int i = end; i >= start; i--) {
            if (i != 0) {
                postprod = postprod * nums[i];
            }
            else {
                prods.add(0, 1);
            }
            prods.add(postprod);
        }

        while (start < n && (end > 0 || end == 0)) {
            // calculate prefix product
            if (start != 0) {
                preprod =  nums[start-1] * preprod;
            }
            int product = preprod * prods.get(end);
            answer[start] = product;
            start++;
            end--;
        }

        return answer;
    }


    public int[] betterSol(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        ans[0] = 1;
        for(int i = 1; i < n; i++){ // calculate prefix products
            ans[i] = ans[i-1] * nums[i-1];
        }
        
        int right = 1;
        for (int i = n-1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
}
