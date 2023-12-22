class Solution {
public:
    int maxScore(string s) {
        int zero = 0, one = count(s.begin(), s.end(), '1'), ret = 0;
        for(int i = 0; i < s.size()-1; i++) {
            zero += (s[i] == '0');
            one -= (s[i] == '1');
            ret = max(ret, zero + one);
        }
        return ret;
    }
};