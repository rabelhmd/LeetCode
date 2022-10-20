class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f = 0;
        for(auto &x: t) {
            if(x == s[f]) f += 1;
        }
        return f == s.size();
    }
};