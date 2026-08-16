class Solution {
public:
    bool solve(int i, int j, string &s, string &p, vector<vector<int>>& dp) {
        
        // Pattern khatam ho gaya
        if (j == p.size()) {
            return i == s.size();
        }

        // Already calculated
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        // Current character match karta hai ya nahi
        bool match = (i < s.size() && 
                     (s[i] == p[j] || p[j] == '.'));

        // Agar next character '*'
        if (j + 1 < p.size() && p[j + 1] == '*') {
            
            // Case 1: x* ko zero times use karo
            bool skip = solve(i, j + 2, s, p, dp);

            // Case 2: x* ko current character ke liye use karo
            bool take = match && solve(i + 1, j, s, p, dp);

            return dp[i][j] = skip || take;
        }

        // '*' nahi hai, normal matching
        if (match) {
            return dp[i][j] = solve(i + 1, j + 1, s, p, dp);
        }

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>> dp(
            s.size() + 1,
            vector<int>(p.size() + 1, -1)
        );

        return solve(0, 0, s, p, dp);
    }
};