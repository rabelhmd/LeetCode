class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0, len = nums.size();
        for(int i = 0; i < len; i++) {
            if(reach < i) return false;
            reach = max(reach, i + nums[i]);
        }
        return true;
    }
};