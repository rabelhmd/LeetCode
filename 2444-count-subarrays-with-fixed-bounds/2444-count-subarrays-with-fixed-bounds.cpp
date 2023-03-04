class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int flagMin = -1, flagMax = -1, bound = -1, len = nums.size();
        
        long long ret = 0;
        for(int i = 0; i < len; i++) {
            int& x = nums[i];
            if(x >= minK and x <= maxK) {
                if(x == minK) flagMin = i;
                if(x == maxK) flagMax = i;
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