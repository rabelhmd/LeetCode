class Solution {
public:
    bool isSubsequence(string s, string t) {
        int id = 0;
        for(auto &x: t) if(s[id] == x) id += 1;
        return id == s.size();
    }
};