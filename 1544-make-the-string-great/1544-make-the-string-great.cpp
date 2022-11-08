class Solution {
public:
    bool isMatch(char a, char b) {
        return a == (b+32) || a == (b-32);
    }
    
    string makeGood(string s) {
        string ret;
        for(int i = 0; i < s.size(); i++) {
            ret += s[i];
            while(ret.size() && isMatch(ret.back(), s[i+1])) {
                ret.pop_back();
                i += 1;
            }
        }
        return ret;
    }
};