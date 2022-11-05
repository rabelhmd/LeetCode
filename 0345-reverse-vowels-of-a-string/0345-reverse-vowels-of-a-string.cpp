class Solution {
public:
    
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    string reverseVowels(string s) {
        string v;
        for(auto &x: s) {
            if(isVowel(x)) v += x;
        }
        int j = v.size()-1;
        for(int i = 0; i < s.size(); i++) {
            if(isVowel(s[i])) {
                s[i] = v[j--];
            }
        }
        return s;
    }
};