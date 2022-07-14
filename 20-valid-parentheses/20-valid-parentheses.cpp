class Solution {
public:
    
    bool isValid(string s) {
        stack <char> St;
        for(auto c: s) {
            if(c == '(' || c == '{' || c == '[') {
                St.push(c);
                continue;
            }
            if(St.empty()) {
                return false;
            }
            
            char ch = St.top(); St.pop();
            if(ch == '(' && c != ')') return false;
            if(ch == '{' && c != '}') return false;
            if(ch == '[' && c != ']') return false;
        }
        return St.empty();
    }
};