class Solution {
public:
    
    bool isOpening(char c) {
        return (c == '(' || c == '{' || c == '[');
    }
    
    bool inValid(char cur, char top) {
        if(cur == ')' && top != '(') return true;
        if(cur == '}' && top != '{') return true;
        if(cur == ']' && top != '[') return true;
        return false;
    }
    
    bool isValid(string s) {
        stack <char> St;
        for(auto c: s) {
            if(isOpening(c)) {
                St.push(c);
                continue;
            }
            if(St.size() <= 0) return false;
            char top = St.top(); St.pop();
            if(inValid(c, top)) return false;
        }
        return St.empty();
    }
};