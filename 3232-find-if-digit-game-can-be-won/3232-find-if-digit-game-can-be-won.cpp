class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long a = 0, b = 0, c = 0, d = 0;
        for(auto &x: nums) {
            if(x < 10) a += x;
            else b += x;
            if(x >= 10) c += x;
            else d += x;
        }
        if(a > b and (a or b)) return true;
        if(c > d and (c or d)) return true;
        return false;
    }
};