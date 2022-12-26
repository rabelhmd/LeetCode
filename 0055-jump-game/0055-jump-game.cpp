class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size(), reach = 0;
        for(int i = 0; i < len; i++) {
            if(reach < i) return false;
            reach = max(reach, nums[i] + i);
        }
        return true;
    }
};