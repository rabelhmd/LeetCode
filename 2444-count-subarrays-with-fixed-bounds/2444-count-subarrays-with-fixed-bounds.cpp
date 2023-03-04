class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int flagMin = -1, flagMax = -1, bound = -1, len = nums.size();
        
        long long ret = 0;
        for(int i = 0; i < len; i++) {
            if(nums[i] >= minK and nums[i] <= maxK) {
                if(nums[i] == minK) flagMin = i;
                if(nums[i] == maxK) flagMax = i;
                ret += max(0, min(flagMin, flagMax) - bound);
                continue;
            }
            flagMin = -1;
            flagMax = -1;
            bound = i;
        }
        return ret;
    }
};