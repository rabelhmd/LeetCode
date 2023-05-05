class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int maxVowels(string s, int k) {
        int ret = 0, cur = 0, len = s.size();
        for(int i = 0; i < len; i++) {
            if(i < k) {
                cur += isVowel(s[i]);
            } else {
                cur += isVowel(s[i]) - isVowel(s[i-k]);
            }
            ret = max(cur, ret);
        }
        return ret;
    }
};