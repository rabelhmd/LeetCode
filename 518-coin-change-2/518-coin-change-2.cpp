class Solution {
public:
    
    int dp[5005][305];
    
    int coinChange(vector<int>& coins, int len, int amount, int pos) {
        if(amount == 0) return 1;
        if(pos >= len) return 0;
        
        int &ret = dp[amount][pos];
        if(ret != -1) return ret;
        
        ret = 0;
        if(amount - coins[pos] >= 0) {
            ret += coinChange(coins, len, amount - coins[pos], pos);
        }
        ret += coinChange(coins, len, amount, pos + 1);
        return ret;
    }
    
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return coinChange(coins, coins.size(), amount, 0);
    }
};