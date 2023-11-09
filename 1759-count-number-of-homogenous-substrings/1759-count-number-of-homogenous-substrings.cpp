class Solution {
public:
    int countHomogenous(string s) {
        int ret = 0, len = s.size(), count = 0;
        for(int i = 0; i < len; i++) {
            if(i and s[i-1] == s[i]) count += 1;
            else count = 1;
            ret = (ret + count) % 1000000007;
        }
        return ret;
    }
};