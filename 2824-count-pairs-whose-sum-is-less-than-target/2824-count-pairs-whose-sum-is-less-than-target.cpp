class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ret = 0;
        int l = 0, r = nums.size()-1;
        while(l < r) {
            if(nums[l] + nums[r] < target) {
                ret += (r-l);
                l += 1;
                continue;
            }
            r -= 1;
        }
        return ret;
    }
};