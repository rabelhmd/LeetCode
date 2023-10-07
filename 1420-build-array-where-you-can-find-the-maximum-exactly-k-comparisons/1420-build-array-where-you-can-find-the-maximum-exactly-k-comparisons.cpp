class Solution {
public:
    int dp[101][51][51] = {};
    int dfs(int n, int m, int k, int i, int max_val) {
        if (n == i) return k == 0;
        if (k < 0) return 0;
        if (dp[max_val][i][k] == 0) {        
            dp[max_val][i][k] = 1;
            for (auto val = 1; val <= m; ++val) {
                dp[max_val][i][k] += dfs(n, m, k - (max_val < val), i + 1, max(max_val, val));
                dp[max_val][i][k] %= 1000000007;
            }
        }
        return dp[max_val][i][k] - 1;
    }
    int numOfArrays(int n, int m, int k) {
        return dfs(n, m, k, 0, 0);
    }
};