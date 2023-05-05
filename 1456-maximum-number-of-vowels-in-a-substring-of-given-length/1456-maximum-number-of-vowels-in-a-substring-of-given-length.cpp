class Solution {
public:
    int maxVowels(string s, int k) {
        set <char> St = {'a', 'e', 'i', 'o', 'u'};
        int ret = 0, cur = 0, len = s.size();
        
        for(int i = 0; i < len; i++) {
            if(i < k) {
                cur += St.find(s[i]) != St.end();
            } else {
                cur += (St.find(s[i]) != St.end()) - (St.find(s[i-k]) != St.end());
            }
            ret = max(cur, ret);
        }
        return ret;
    }
};