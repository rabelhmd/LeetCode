class Solution {
public:
    
    int dp[505][505];
    
    int editDistance(string &str1, string &str2, int &len1, int &len2, int pos1, int pos2) {
        
        if(pos1 == len1) return len2-pos2;
        if(pos2 == len2) return len1-pos1;
        
        int &ret = dp[pos1][pos2];
        
        if(ret != -1) {
            return ret;
        }
        
        if(str1[pos1] == str2[pos2]) {
            ret = editDistance(str1, str2, len1, len2, pos1+1, pos2+1);
            return ret;
        }
        
        int insert = editDistance(str1, str2, len1, len2, pos1, pos2+1);
        int remove = editDistance(str1, str2, len1, len2, pos1+1, pos2);
        int replace = editDistance(str1, str2, len1, len2, pos1+1, pos2+1);
        ret = 1 + min({insert, remove, replace});
        return ret;
    }
    
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof(dp));
        int len1 = word1.size();
        int len2 = word2.size();
        int pos1 = 0, pos2 = 0;
        return editDistance(word1, word2, len1, len2, pos1, pos2);
    }
};