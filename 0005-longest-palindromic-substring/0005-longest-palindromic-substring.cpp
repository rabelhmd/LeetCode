class Solution {
public:
    
    int len, maxLen = 0;
    string res;
    void palindromeLen(string &s, int x, int y) {
        if(y >= len) return;
        while(x >= 0 && y < len && s[x] == s[y]) x--, y++;
        int dif = y - x - 1;
        if(dif > maxLen) {
            maxLen = dif;
            res = s.substr(x + 1, dif);
        }
    }
    
    string longestPalindrome(string s) {
        len = s.size();
        maxLen = 0;
        for(int i = 0; i < len; i++) {
             palindromeLen(s, i, i); // odd len palindrome
             palindromeLen(s, i, i+1); // even len
        }
        return res;
    }
};