class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f = 0;
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == s[f]) f += 1;
        }
        return f == s.size();
    }
};