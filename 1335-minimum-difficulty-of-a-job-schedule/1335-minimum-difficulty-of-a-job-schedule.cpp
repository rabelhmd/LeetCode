class Solution {
public:
    #define INF 10000000
    int len;
    int dp[301][11];
    
    int dfs(int pos, int d, vector <int> &job) {
        if(pos == len and d == 0) return 0;
        if(pos == len or d == 0 or len - pos < d) return INF;
        int &ret = dp[pos][d];
        if(~ret) return ret;
        int cur = INF, mx = -INF;
        for(int i = pos; i < len; i++) {
            mx = max(mx, job[i]);
            cur = min(cur, mx + dfs(i + 1, d - 1, job));
        }
        return ret = cur;
    }
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        len = jobDifficulty.size();
        if(len < d) return -1;
        memset(dp, -1, sizeof(dp));
        return dfs(0, d, jobDifficulty);
    }
};