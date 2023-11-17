class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ret = INT_MIN, len = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len/2; i++) 
            ret = max(ret, nums[i] + nums[len - i - 1]);
        return ret;
    }
};