class Solution {
public:
    int a[256], b[256];
    
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++) {
            if(a[s[i]] != b[t[i]]) return false;
            a[s[i]] = i + 1;
            b[t[i]] = i + 1;
        }
        return true;
    }
};