class Solution {
public:
    int numWays(vector<string>& A, string target) {
        long mod = 1e9+7, M = A.size(), L = A[0].size(), N = target.size();
        if (L < N) return 0;
        
        vector<array<long, 26>> cnt(L, array<long, 26>());
        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < M; ++j) {
                cnt[i][A[j][i] - 'a']++;
            }
        }
        
        vector<long> dp(N + 1);
        for (int i = 0; i < L; ++i) {
            int prev = 1;
            for (int j = 0; j <= i && j < N; ++j) {
                int cur = dp[j + 1];
                dp[j + 1] = ((cnt[i][target[j] - 'a'] * prev) % mod + dp[j + 1]) % mod;
                prev = cur;
            }
        }
        return dp[N];
    }
};