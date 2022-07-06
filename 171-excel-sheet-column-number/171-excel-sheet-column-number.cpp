class Solution {
public:
    int titleToNumber(string title) {
        int res = 0;
        for(auto ch: title) {
            res *= 26;
            res += (ch - 'A' + 1);
        }
        return res;
    }
};