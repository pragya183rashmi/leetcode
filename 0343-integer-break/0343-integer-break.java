class Solution {

    int[] t = new int[59];

    int solve(int n) {

        if (n == 1)
            return 1;

        if (t[n] != -1)
            return t[n];

        int result = Integer.MIN_VALUE;

        for (int i = 1; i < n; i++) {

            int prod = i * Math.max(n - i, solve(n - i));

            result = Math.max(result, prod);
        }

        return t[n] = result;
    }

    public int integerBreak(int n) {

        Arrays.fill(t, -1);

        return solve(n);
    }
}
