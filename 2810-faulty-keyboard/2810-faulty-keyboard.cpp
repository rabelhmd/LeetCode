class Solution {
public:
    
    string finalString(string s) {
        string ret;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'i') {
                reverse(ret.begin(), ret.end());
                continue;
            }
            ret += s[i];
        }
        return ret;
    }
};