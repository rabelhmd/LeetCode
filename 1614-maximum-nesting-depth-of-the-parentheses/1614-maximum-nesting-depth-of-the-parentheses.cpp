class Solution {
public:
    int maxDepth(string s) {
        int ret = 0, depth = 0;
        for(auto &x: s) {
            if(x == '(') depth += 1;
            else if(x == ')') depth -= 1;
            ret = max(ret, depth);
        }
        return ret;
    }
};