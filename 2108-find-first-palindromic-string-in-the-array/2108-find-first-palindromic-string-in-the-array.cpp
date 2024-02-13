class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &x: words) {
            int len = x.size(), f = true;
            for(int i = 0, j = len-1; j >= 0; i++, j--) if(x[i] != x[j]) f = false;
            if(f) return x;
        }
        return "";
    }
};