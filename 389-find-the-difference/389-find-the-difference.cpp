class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i = 0, len = s.size();
        for(; i < len; i++) {
            if(s[i] != t[i]) {
                return t[i];
            }
        }
        return t[t.size()-1];
    }
};