class Solution {
public:
    long long minimumSteps(string s) {
        long long ret = 0;
        for(int i = 0, count = 0; i < s.size(); i++) {
            if(s[i] == '1') count += 1;
            else ret += count;
        }
        return ret;
    }
};