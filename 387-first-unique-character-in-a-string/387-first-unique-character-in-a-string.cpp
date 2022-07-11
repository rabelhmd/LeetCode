class Solution {
public:
    
    int Mp[256];
    
    int firstUniqChar(string s) {
        for(auto c: s) Mp[c] += 1;
        
        int len = s.size();
        for(int i = 0; i < len; i++)
            if(Mp[s[i]] == 1) return i;
        return -1;
    }
};