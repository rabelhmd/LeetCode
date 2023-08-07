class Solution {
public:
    
    string finalString(string s) {
        string ret;
        for(auto& x: s) {
            if(x == 'i') {
                reverse(ret.begin(), ret.end());
                continue;
            }
            ret += x;
        }
        return ret;
    }
};