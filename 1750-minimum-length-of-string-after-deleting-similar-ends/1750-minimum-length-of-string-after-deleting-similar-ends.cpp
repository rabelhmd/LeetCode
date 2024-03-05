class Solution {
public:
    int minimumLength(string s) {
        int l = 0, r = s.size()-1;
        while(l < r and s[l] == s[r]) {
            char x = s[l];
            while(l <= r and s[l] == x) l++;
            while(l <= r and s[r] == x) r--;
        }
        return r - l + 1; 
    }
};