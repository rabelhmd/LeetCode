class Solution {
public:
    int minimumDeletions(string s) {
        int ret = 0, b = 0;
        for(auto &x: s) {
            if(x == 'a') ret = min(++ret, b);
            else b++;
        }
        return ret;
    }
};