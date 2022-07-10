class Solution {
public:
    int dp[1005], len = 0;
    int rec(vector<int> &cost, int pos) {
        if(pos >= len) return 0;
        int &ret = dp[pos];
        if(~ret) return ret;
        return ret = min(rec(cost, pos + 1), rec(cost, pos + 2)) + cost[pos];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        len = cost.size();
        return min(rec(cost, 0), rec(cost, 1));
    }
};