class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        
        int len = s1.size();
        vector <char> a, b;
        for(int i = 0; i < len; i++) {
            if(s1[i] != s2[i]) a.push_back(s1[i]), b.push_back(s2[i]);
        }
        
        if(a.size() > 2 || b.size() > 2) return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b && !a.empty();
    }
};