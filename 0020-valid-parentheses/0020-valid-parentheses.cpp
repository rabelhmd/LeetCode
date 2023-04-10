class Solution {
public:
    bool isValid(string s) {
        stack <char> St;
        for(auto x: s) {
            if(x == '(' || x == '{' || x == '[') {
                St.push(x);
                continue;
            }
            
            if(St.empty()) return false;
            
            char top = St.top(); St.pop();
            if(top == '(' and x != ')') return false;
            if(top == '{' and x != '}') return false;
            if(top == '[' and x != ']') return false;
        }
        return St.empty();
    }
};