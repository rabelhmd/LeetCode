class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ret = 0, id = 0;
        for(auto &x: nums) {
            if(__builtin_popcount(id++) == k) ret += x;
        }
        return ret;
    }
};