class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int len = nums.size(), last = nums[len-1];
        if(nums[0] <= last) {
            for(int i = 1; i < len; i++) {
                if(nums[i-1] > nums[i]) return false;
            }
            return true;
        }
        for(int i = 1; i < len; i++) if(nums[i-1] < nums[i]) return false;
        return true;
    }
};