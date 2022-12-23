class Solution {
public:
    int rec(int id, int turn, int &len, vector<int>& prices, vector<vector<int>> &dp) {
        if(id >= len) return 0;
        int &ret = dp[id][turn];
        if(~ret) return ret;
        if(turn == 0) 
            return ret = max(- prices[id] + rec(id+1, 1, len, prices, dp), rec(id+1,0,len,prices, dp));
        if (turn == 1)
            return ret = max(prices[id] + rec(id+1, 2, len, prices, dp), rec(id+1,1,len,prices, dp));
        return ret = rec(id + 1 , 0 , len, prices, dp);
    }
    
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 0) return 0;
        vector<vector<int>> dp(len + 1 , vector<int>(3 , -1));
        return rec(0, 0, len, prices, dp);
    }
};
