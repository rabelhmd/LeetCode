class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int _min = -1, _max = -1, bound = -1, len = nums.size();
        
        long long ret = 0;
        for(int i = 0; i < len; i++) {
            int &cur = nums[i];
            if(cur >= minK and cur <= maxK) {
                if(cur == minK) _min = i;
                if(cur == maxK) _max = i;
                ret += max(0, min(_min, _max) - bound);
                continue;
            }
            _min = _max = -1;
            bound = i;
        }
        return ret;
    }
};