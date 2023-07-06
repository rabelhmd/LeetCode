class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int l = 0, r = 0, sum = 0;
        int ret = INT_MAX, len = nums.size();
        
        while(r < len) {
            sum += nums[r++];
            while(sum >= t) {
                ret = min(ret, r - l);
                sum -= nums[l++];
            }
        }
        if(ret == INT_MAX) ret = 0;
        return ret;
    }
};