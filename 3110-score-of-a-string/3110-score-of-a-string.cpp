class Solution {
public:
    int scoreOfString(string s) {
        int ret = 0;
        for(int i = 0; i < s.size()-1; i++) ret += (abs((int)s[i] - (int) s[i+1]));
        return ret;
    }
};