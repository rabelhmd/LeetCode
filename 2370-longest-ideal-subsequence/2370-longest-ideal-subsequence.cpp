class Solution {
public:

    int longestIdealString(string s, int k) {
        vector <int> dp(26, 0);
        for(auto &c: s) {
            int x = c - 'a';
            int cur = dp[x];
            for(int i = max(x-k, 0); i <= x+k && i < 26; i++) 
                cur = max(cur, 1 + dp[i]);
            dp[x] = cur;
        }
        return *max_element(dp.begin(), dp.end());
    }
};