class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        if(len <= 1) return false;
        
        for(int i = len/2; i > 0; i--) {
            if(len % i != 0) continue;
            string sub = s.substr(0, i), temp;
            int l = temp.size();
            while(l < len and temp == s.substr(0, l)) {
                temp += sub;
                l = temp.size();
            }
            if(temp == s) return true;
        }
        return false;
    }
};