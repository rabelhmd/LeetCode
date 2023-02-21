class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ret = nums[0], len = nums.size();
        for(int i = 1; i < len; i++) ret ^= nums[i];
        return ret;
    }
};