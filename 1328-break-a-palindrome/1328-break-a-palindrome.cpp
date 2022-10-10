class Solution {
public:
    string breakPalindrome(string str) {
        int len = str.size();
        if(len <= 1) return "";
        for(int i = 0; i < len/2; i++) {
            if(str[i] != 'a') {
                str[i] = 'a';
                return str;
            }
        }
        str[len-1] = 'b';
        return str;
    }
};