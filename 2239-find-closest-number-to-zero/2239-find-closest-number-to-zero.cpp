class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ret = INT_MAX;
        for(auto &x: nums) {
            if(abs(x) == abs(ret)) ret = max(x, ret);
            else if(abs(x) < abs(ret)) ret = x;
        }
        return ret;
    }
};