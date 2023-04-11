class Solution {
public:
    string removeStars(string s) {
        stack <char> St;
        
        for(auto &x: s) {
            if(x == '*') {
                if(!St.empty()) {
                    St.pop();
                }
                continue;
            }
            St.push(x);
        }
        
        string ret;
        while(!St.empty()) {
            ret += St.top();
            St.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};