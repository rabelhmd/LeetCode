class Solution {
public:
    int minAddToMakeValid(string s) {
        int r = 0, l = 0;
        for(char c: s) {
            if(c == '(') r += 1;
            else if(r > 0) r -= 1;
            else l += 1;
        }
        return r + l;
    }
};