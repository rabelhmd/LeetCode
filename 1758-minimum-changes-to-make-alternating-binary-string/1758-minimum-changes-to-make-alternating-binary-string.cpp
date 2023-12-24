class Solution {
public:
    int minOperations(string s) {
        int zero = 0, one = 0, len = s.size();
        for(int i = 0; i < len; i++) zero += (((i % 2 == 0 and s[i] != '0')) or (i % 2 and s[i] != '1'));
        for(int i = 0; i < len; i++) one += (((i % 2 == 0 and s[i] != '1')) or (i % 2 and s[i] != '0'));
        return min(zero, one);
    }
};