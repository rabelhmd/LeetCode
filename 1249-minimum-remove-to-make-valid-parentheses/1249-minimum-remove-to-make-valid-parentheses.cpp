class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        for(auto &x: s) {
            if(x == '(') count += 1;
            else if(x == ')') {
                if(count == 0) x = '#';
                else count -= 1;
            }
        }
        
        for(int i = s.size()-1; i >= 0; i--) {
            if(count > 0 and s[i] == '(') {
                s[i] = '#';
                count -= 1;
            }
        }
        
        string ret;
        for(auto &x: s) if(x != '#') ret += x;
        return ret;
    }
};