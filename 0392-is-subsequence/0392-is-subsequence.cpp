class Solution {
public:
    bool isSubsequence(string s, string t) {
        int id = 0;
        for(auto &x: t) id += s[id] == x;
        return id == s.size();
    }
};