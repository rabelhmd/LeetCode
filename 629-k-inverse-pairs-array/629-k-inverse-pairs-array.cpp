class Solution {
public:
    int dp[1001][1001];
    int mod = 1e9+7;
    
    int memo(int n, int k) {
        
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            long long sum = 0;
            for (int j = 0; j <= k; j++) {
                sum += dp[i - 1][j];
                if (j >= i) sum -= dp[i - 1][j - i];
                dp[i][j] = ((long long)dp[i][j] + sum) % mod; 
            }
        }
        return dp[n][k];
    }
    
    int kInversePairs(int n, int k) {
        return memo(n, k);
    }
};