class Solution {
public:
    
    int dp[2005];
    int len = 0;
    
    int rec(int t, vector<int>& coins) {
        if(t < 0) return 0;
        if(t == 0) return 1;
        int &ret = dp[t];
        if(~ret) return ret;
        ret = 0;
        for(int i = 0; i< len; i++) {
            int coin = coins[i];
            int baki = t - coin;
            if(baki < 0) continue;
            ret += rec(baki, coins);
        }
        return ret;
    }

    int combinationSum4(vector<int>& nums, int target) {
       memset(dp, -1, sizeof(dp));
        len = nums.size();
        return rec(target, nums);
    }
};