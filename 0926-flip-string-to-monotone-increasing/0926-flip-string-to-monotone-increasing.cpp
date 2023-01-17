class Solution {
public:
    
    int minFlipsMonoIncr(string s) {
        int left = 0, right = 0;
        for(auto &x: s) right += x == '0';
        
        int ret = right;
        for(auto &x: s) {
            if(x == '0') right--;
            else left++;
            ret = min(ret, left + right);
        }
        return ret;
    }
};