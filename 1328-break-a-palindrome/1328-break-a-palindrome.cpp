class Solution {
public:
    string breakPalindrome(string P) {
        if(P.size() == 1) return "";
        for(int i = 0; i < P.size(); i++) {
            if(i == (P.size() / 2)) {
                continue;
            }
            if(P[i] != 'a') {
                P[i] = 'a';
                return P;
            }
        }
        P[P.size()-1] = 'b';
        return P;
    }
};