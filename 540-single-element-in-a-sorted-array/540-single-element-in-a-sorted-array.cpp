class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();
        int n = nums[len-1];
        nums.pop_back();
        for(auto x: nums) n ^= x;
        return n;
    }
};