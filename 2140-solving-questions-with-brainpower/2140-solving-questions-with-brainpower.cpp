class Solution {
public:
    long long dp[(int)1e5+5], size;
    long long rec(vector<vector<int>>& q, int pos) {
        if(pos >= size) return 0;
        long long &ret = dp[pos];
        if(~ret) return ret;
        long long skip = rec(q, pos + 1);
        long long take = q[pos][0] + rec(q, pos + q[pos][1] + 1);
        return ret = max(skip, take);
     }

    long long mostPoints(vector<vector<int>>& questions) {
        memset(dp, -1, sizeof(dp));
        size = questions.size();
        return rec(questions, 0);
    }
};