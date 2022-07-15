class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> St;
        St.push(-1);
        
        int mx = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                St.push(i);
                continue;
            }
            St.pop();
            if(St.empty()) {
               St.push(i); 
            } else {
                mx = max(mx, i - St.top());
            }
        }
        
        return mx;
    }
};