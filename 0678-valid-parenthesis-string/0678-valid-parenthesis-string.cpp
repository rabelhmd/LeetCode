class Solution {
public:
    bool checkValidString(string s) {
        int a = 0, b = 0;
        for(auto &x: s) {
            if(x == '(') a += 1, b += 1;
            else if(x == ')') a -= 1, b -= 1;
            else if(x == '*') a += 1, b -= 1;
            if(a < 0) return false;
            b = max(b, 0);
        }
        return b == 0;
    }
};