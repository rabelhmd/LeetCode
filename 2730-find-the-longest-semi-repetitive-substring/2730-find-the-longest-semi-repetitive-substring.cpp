class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int ret = 1, len = s.size();
        for(int i = 0; i < len; i++) {
            int count = 0;
            for(int j = i + 1; j < len; j++) {
                if(s[j] == s[j-1]) count += 1;
                if(count <= 1) {
                    ret = max(ret, j - i + 1);
                }
            }
        }
        return ret;
    }
};