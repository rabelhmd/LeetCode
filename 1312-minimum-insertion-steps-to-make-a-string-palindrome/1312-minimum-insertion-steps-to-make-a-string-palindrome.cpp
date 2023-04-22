class Solution {
public:
    
    int longestPalindromeSubseq(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        int len = str.size();
        
        vector<vector<int>> dp(len+1, vector<int>(len+2, 0));
        for(int i = 1; i <= len; i++) {
            for(int j = 1; j <= len; j++) {
                if(s[i-1] == str[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[len][len];
    }
    
    int minInsertions(string s) {
        return s.size() - longestPalindromeSubseq(s);
    }
};