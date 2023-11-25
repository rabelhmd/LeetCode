class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int l = 0;
        int r = accumulate(begin(nums), end(nums), 0);
        int len = nums.size();
        
        for(int i = 0; i < len; i++) {
            l += nums[i];
            r -= nums[i];
            nums[i] = r - nums[i] * (len - i - 1) - l + nums[i] * (i + 1);
        }
        return nums;
    }
};