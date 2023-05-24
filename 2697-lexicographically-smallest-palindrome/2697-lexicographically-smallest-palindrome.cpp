class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i <= j) {
            if(s[i] != s[j]) {
                char cur = (char) min(s[i], s[j]);
                s[i] = cur, s[j] = cur;
            }
            i += 1, j -= 1;
        }
        return s;
    }
};