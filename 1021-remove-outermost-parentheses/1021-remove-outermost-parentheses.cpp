class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> St;
        string ret;
        
        for(auto &c: s) {
            if(c == '(') {
                if(!St.empty()) ret += c;
                St.push(c); continue;
            }
            St.pop();
            if(!St.empty()) ret += c;
        }
        return ret;
    }
};