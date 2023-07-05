class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ret = 0, zero = 0, left = 0, len = nums.size();
        for(int i = 0; i < len; i++) {
            if(nums[i] == 0) zero += 1;
            while(zero > 1) {
                if(nums[left] == 0) zero -= 1;
                left += 1;
            }
            ret = max(ret, i - left + 1 - zero);
        }
        if(ret == len) ret -= 1;
        return ret;
    }
};