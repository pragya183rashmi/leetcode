class Solution {
    public int alternateDigitSum(int n) {
        
    
 String s = String.valueOf(n);
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int digit = s.charAt(i) - '0';

            if (i % 2 == 0) {
                ans += digit;
            } else {
                ans -= digit;
            }
        }

        return ans;
    }
}