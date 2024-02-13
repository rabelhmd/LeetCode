class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &x: words) {
            int len = x.size(), f = true;
            for(int i = 0, j = len-1; i < len/2; i++, j--) if(x[i] != x[j]) f = false;
            if(f) return x;
        }
        return "";
    }
};