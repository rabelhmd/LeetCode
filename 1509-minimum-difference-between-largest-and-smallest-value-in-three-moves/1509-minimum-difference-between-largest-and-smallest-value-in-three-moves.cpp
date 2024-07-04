class Solution {
public:
    int minDifference(vector<int>& nums) {
        int len = nums.size();
        if (len < 5) return 0;
        sort(nums.begin(), nums.end());
        int ret = INT_MAX;
        for(int i = 3; i >= 0; i--) {
            ret = min(ret, nums[--len]-nums[i]);
        }
        return ret;
    }
};