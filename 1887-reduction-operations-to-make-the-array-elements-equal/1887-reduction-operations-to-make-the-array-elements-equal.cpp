class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ret = 0, len = nums.size();
        sort(begin(nums), end(nums));
        for (int i = len - 1; i > 0; i--)
            if (nums[i - 1] != nums[i]) ret += len - i;
        return ret;
    }
};