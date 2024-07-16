class Solution {
public:
    int minimumChairs(string s) {
        int ret = 0, mx = 0;
        for(auto &x: s) {
            if(x == 'E') ret += 1;
            else {
                mx = max(ret, mx); ret -= 1;
            }
        }
        mx = max(ret, mx);
        return mx;
    }
};