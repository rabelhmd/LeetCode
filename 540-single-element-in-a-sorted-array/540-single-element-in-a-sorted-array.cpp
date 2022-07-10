class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums[0];
        for(int i = 1; i < nums.size(); i++) n ^= nums[i];
        return n;
    }
};