class Solution {
public:
    const int MOD = (int) 1e9+7;
    unordered_map<int, long> dp;
    
    int numFactoredBinaryTrees(vector<int>& A) {
        int ans = 0, len = A.size();
        sort(A.begin(), A.end());
        
        for (int i = 0; i < len; i++) {
            long &cur = dp[A[i]];
            cur = 1;
            for (int j = 0; j < i; ++j) {
                if (A[i] % A[j] == 0) {
                    cur = (cur + dp[A[j]] * dp[A[i] / A[j]]) % MOD;
                }
            }
            ans = (ans + cur) % MOD;
        }
        return ans;
    }
};
