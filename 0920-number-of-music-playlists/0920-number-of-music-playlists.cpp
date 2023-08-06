class Solution {
public:
    #define LL long long
    const int MOD = 1e9 + 7;
    
    LL rec(int n, int goal, int k, vector<vector<int>>& dp) {
        if (n == 0 && goal == 0) return 1;
        if (n == 0 || goal == 0) return 0;
        int &ret = dp[n][goal];
        if (~ret) return ret;
        LL pick = rec(n - 1, goal - 1, k, dp) * n;
        LL notpick = rec(n, goal - 1, k, dp) * max(n - k, 0);
        return ret = (pick + notpick) % MOD;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int>> dp(n + 1, vector<int>(goal + 1, -1));
        return rec(n, goal, k, dp);
    }
};