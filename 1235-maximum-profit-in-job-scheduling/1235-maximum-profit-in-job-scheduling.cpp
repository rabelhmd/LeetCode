class Solution {
public:
    int dp[50001] = {};
    int dfs(vector<vector<int>>& comb, int pos, int last) {
        if(pos >= comb.size()) return 0;
        if(comb[pos][0] < last) return dfs(comb, pos+1, last);
        int &ret = dp[pos];
        if(~ret) return ret;
        return ret = max(dfs(comb, pos+1, comb[pos][1]) + comb[pos][2], dfs(comb, pos+1, 0));
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        memset(dp, -1, sizeof dp);
        vector<vector<int>> comb;
        for(int i = 0; i < startTime.size(); i++) comb.push_back({startTime[i], endTime[i], profit[i]});
        sort(comb.begin(), comb.end());
        return dfs(comb, 0, 0);
    }
};