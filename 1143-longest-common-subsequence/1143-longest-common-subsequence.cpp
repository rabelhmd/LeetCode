class Solution {
public:
    int dp[1005][1005];
    string t1, t2;
    void reset() {
        for(int i = 0; i < 1005; i++) {
            for(int j = 0; j < 1005; j++) {
                dp[i][j] = -1;
            }
        }
    }
    
    int LCS(int i, int j) {
        if(i >= t1.size() || j >= t2.size()) return 0;
        int &ret = dp[i][j];
        if(~ret) return ret;
        if(t1[i] == t2[j]) return ret = 1 + LCS(i+1, j+1);
        return ret = max((LCS(i, j+1)), LCS(i+1, j));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        reset();
        t1 = text1, t2 = text2;
        return LCS(0, 0);
    }
};