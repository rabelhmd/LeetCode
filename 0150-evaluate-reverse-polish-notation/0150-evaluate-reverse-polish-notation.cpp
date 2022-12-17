class Solution {
public:
    long apply(int a, int b, char opr) {
        if(opr == '+') return a + b;
        if(opr == '-') return a - b;
        if(opr == '*') return (long)a * b;
        return a/b;
    }
    
    int evalRPN(vector<string>& tokens) {
        stack <long> St;
        for(auto t: tokens) {
            if(t.size() == 1 and !isdigit(t[0])) {
                long b = St.top(); St.pop();
                long a = St.top(); St.pop();
                long ret = apply(a, b, t[0]);
                St.push(ret);
                continue;
            }
            St.push(stoi(t));
        }
        return St.top();
    }
};