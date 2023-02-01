class Solution {
public:
    int balancedStringSplit(string s) {
        int b = 0, ret = 0;
        for(auto &c: s) {
            b += (c == 'L') ? 1 : -1;
            ret += (b == 0);
        }
        return ret;
    }
};