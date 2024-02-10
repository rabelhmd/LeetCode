class Solution {
public:
    int rec(string &str, int &len, int i, int j) {
        int ret = 0;
        while(i >= 0 && j < len && str[i] == str[j]) {
            ret += 1, i--, j++;
        }
        return ret;
    }
    int countSubstrings(string s) {
        int ret = 0, len = s.size();
        for(int i = 0; i < len; i++) {
            ret += rec(s, len, i, i) + rec(s, len, i, i + 1);
        }
        return ret;
    }
};