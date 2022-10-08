class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int ret = nums[0] + nums[1] + nums[2];
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len; i++) {
            int j = i + 1, k = len-1;
            while(j < k) {
                int cur = nums[i] + nums[j] + nums[k];
                if(abs(cur - target) < abs(ret - target)) {
                    ret = cur;
                }
                bool f = cur < target;
                j += (f ? 1 : 0);
                k -= (!f ? 1 : 0);
            }
        }
        return ret;
    }
};