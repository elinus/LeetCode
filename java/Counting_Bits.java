import java.util.Arrays;

public class Counting_Bits {

    class Solution {
        private int count_bits_utils(int n) {
            int count = 0;
            while (n != 0) {
                if ((n & 1) != 0)
                    count++;
                n >>= 1;
            }
            return count;
        }
    
    
        public int[] countBits(int n) {
            int[] ans = new int[n + 1];
            for (int i = 0; i <= n; i++) {
                ans[i] = count_bits_utils(i);
            }
            return ans;
        }

    }

    public static void main(String[] args) {
        
        Counting_Bits.Solution solution = new Counting_Bits().new Solution();
        System.out.println(Arrays.toString(solution.countBits(2)));
    }
    
}


