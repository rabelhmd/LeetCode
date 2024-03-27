class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        unsigned long long p = 1;
        int n = nums.size(), l = 0, ret = 0;
        for(int r = 0; r < n; r++) {
            p *= nums[r];
            while (p >= k) p /= nums[l++];
            ret += (r - l + 1);
        }
        return ret;
    }
};