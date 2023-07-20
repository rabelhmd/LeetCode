class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int len = ast.size(); stack<int> St;
        for(int i = 0; i < len; i++) {
            if(ast[i] > 0 || St.empty()) {
                St.push(ast[i]);
                continue;
            }
            while(!St.empty() and St.top() > 0 and St.top() < abs(ast[i])) {
                St.pop();
            }
            if(!St.empty() and St.top() == abs(ast[i])) {
                St.pop();
            }
            else if(St.empty() || St.top() < 0) {
                St.push(ast[i]);
            }
        }

        len = St.size();
        vector<int> ret(len);
        for(int i = len - 1; i >= 0; i--) {
            ret[i] = St.top();
            St.pop();
        }
        return ret;
    }
};