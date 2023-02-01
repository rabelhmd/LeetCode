class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int len = nums.size();
        return (nums[0] * nums[1]) - (nums[len-1] * nums[len-2]);
    }
};