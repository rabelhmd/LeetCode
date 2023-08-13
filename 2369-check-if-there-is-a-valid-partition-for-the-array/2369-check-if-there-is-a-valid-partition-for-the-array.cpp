class Solution {
public:
    bool validPartition(vector<int>& v) {
        bool dp[4];
        dp[0] = true;
        dp[1] = false;
        dp[2] = v[0] == v[1];
        dp[3] = false;
        
        int len = v.size();
        for (int i = 2; i < len; ++i) {
            bool two = v[i] == v[i - 1];
            bool three = (two && v[i] == v[i - 2]) || (v[i] - 1 == v[i - 1] && v[i] - 2 == v[i - 2]);
            dp[(i + 1) % 4] = (dp[(i - 1) % 4] && two) || (dp[(i - 2) % 4] && three);
        }
        return dp[len % 4];
    }
};