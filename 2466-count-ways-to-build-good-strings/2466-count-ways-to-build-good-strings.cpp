class Solution {
public:
    const int mod = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one) {
        unordered_map <int, int> dp;
        
        dp[0] = 1;
        for(int i = 1; i <= high; i++) {
            int z = dp.count(i - zero) ? dp[i - zero] : 0;
            int o = dp.count(i - one) ? dp[i - one] : 0;
            dp[i] = (z + o) % mod;
        }
        
        int ret = 0;
        for(int i = low; i <= high; i++) {
            ret = (ret + (dp.count(i) ? dp[i] : 0)) % mod; 
        }
        return ret;
    }
};