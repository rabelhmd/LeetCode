class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size(), cur, j, k;
        int ret = nums[0] + nums[1] + nums[2];
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len; i++) {
            j = i + 1, k = len-1;
            while(j < k) {
                cur = nums[i] + nums[j] + nums[k];
                if(abs(cur - target) < abs(ret - target)) ret = cur;
                if(cur < target) {
                    j += 1; continue;
                }
                k -= 1;
            }
        }
        return ret;
    }
};