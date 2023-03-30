class Solution {
public:
    unordered_map <string, bool> Mp;
    
    bool isScramble(string s1, string s2) {
        int len = s1.size();
        if(len != s2.size()) return false;
        if(s1 == s2) return true;
        if(len == 1) return false;
        
        string key = s1 + "|" + s2;
        if(Mp.find(key) != Mp.end()) return Mp[key];
        
        for(int i = 0; i < len-1; i++) {
            bool isSc1 = isScramble(s1.substr(0, i+1), s2.substr(0, i+1))
            && isScramble(s1.substr(i+1), s2.substr(i+1));
            
            if(isSc1) return true;
            
            isSc1 = isScramble(s1.substr(0, i + 1), s2.substr(s2.size() - i - 1))
            && isScramble(s1.substr(i + 1), s2.substr(0, s2.size() - i - 1));
            if(isSc1) return true;
        }
        return Mp[key] = false;
    }
};