class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int sum = 0, ret = 0, cur = 0;
        int len = nums.size();
        
        for(int i = 0; i < len; i++) {
            sum += nums[i];
            cur = ceil((double)sum/(i+1));
            ret = max(ret, cur);
        }
        return ret;
    }
};