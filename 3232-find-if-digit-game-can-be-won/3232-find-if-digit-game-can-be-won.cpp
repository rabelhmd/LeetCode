class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long a = 0, b = 0, c = 0, d = 0;
        for(auto &x: nums) {
            if(x < 10) a += x;
            else b += x;
        }
        return a != b;
    }
};