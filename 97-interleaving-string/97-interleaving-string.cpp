class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.size();
        int len2 = s2.size();
        int len3 = s3.size();
        if(len1 + len2 != len3) return false;
        
        bool dp[len1+1][len2+1];
        char ch;
        for(int i = 0; i < len1 + 1; i++) {
            for(int j = 0; j <len2 + 1; j++) {
                if(!i && !j) {
                    dp[i][j] = true;
                    continue;
                }
                ch = s3[i+j-1];
                if(!i) dp[i][j] = (dp[i][j-1] && ch == s2[j-1]);
                else if(!j) dp[i][j] = (dp[i-1][j] && ch == s1[i-1]);
                else dp[i][j] = (dp[i-1][j] && ch == s1[i-1]) || (dp[i][j-1] && ch == s2[j-1]);
            }
        }
        return dp[len1][len2];
    }
};