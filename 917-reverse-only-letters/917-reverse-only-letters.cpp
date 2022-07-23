class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str, res;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') str += s[i];
            if(s[i] >= 'A' && s[i] <= 'Z') str += s[i];
        }
        
        reverse(str.begin(), str.end());
        
        for(int i = 0, j = 0; i < s.size(); i++) {
            if(!isalpha(s[i])) res += s[i];
            else res += str[j++];
        }
        
        return res;
    }
};