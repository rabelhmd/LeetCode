class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums[0], len = nums.size();
        for(int i = 1; i < len; i++) n ^= nums[i];
        return n;
    }
};