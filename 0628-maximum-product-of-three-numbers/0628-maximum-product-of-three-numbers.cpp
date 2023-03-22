class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last = nums.back(), len = nums.size();
        return max((nums[0] * nums[1] * last), (nums[len-2] * nums[len-3] * last));
    }
};