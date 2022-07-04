class Solution {
public:
    bool isOpening(char c) {
        return (c == '(' || c == '{' || c == '[');
    }
    
    bool valid(char cur, char last) {
        if(last == '(' && cur == ')') return true;
        if(last == '{' && cur == '}') return true;
        if(last == '[' && cur == ']') return true;
        return false;
    }
    
    bool isValid(string s) {
        stack <char> St;
        for(auto bracket: s) {
            if(isOpening(bracket)) {
                St.push(bracket);
                continue;
            }
            if(St.size() <= 0) return false;
            char last = St.top(); St.pop();
            if(!valid(bracket, last)) return false;
        }
        return St.empty();
    }
};