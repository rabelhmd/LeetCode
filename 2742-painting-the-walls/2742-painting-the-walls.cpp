class Solution {
public:
    int dp[501][501];
    int dfs(int i, int walls, vector<int>& cost, vector<int>& time) {
        if (walls <= 0) return 0;
        if (i == cost.size()) return 1000000000;
        if (dp[i][walls] == -1)
            dp[i][walls] = min(dfs(i + 1, walls, cost, time),
                cost[i] + dfs(i + 1, walls - time[i] - 1, cost, time));
        return dp[i][walls];
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        memset(dp, -1, cost.size() * sizeof(dp[0]));
        return dfs(0, time.size(), cost, time);    
    }
};