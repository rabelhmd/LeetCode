class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        for (int len = 0; len < n; ++len) {
            for (int i = 0; i < n - len; ++i) {
                int j = i + len;
                int &cur = dp[i][j];
                cur = len + 1;

                for (int k = i + 1; k <= j; ++k) {
                    int steps = dp[i][k-1] + dp[k][j] - (s[k-1] == s[j] ? 1 : 0);
                    cur = min(cur, steps);
                }
            }
        }

        return dp[0][n - 1];
    }
};