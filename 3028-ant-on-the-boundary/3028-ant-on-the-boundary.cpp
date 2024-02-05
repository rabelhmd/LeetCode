class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ret = 0, sum = 0;
        for(auto &x: nums) {
            sum += x;
            ret += (sum == 0);
        }
        return ret;
    }
};