class Solution {
public:
    int f(int n) {
        int mx = 0; while (n > 0) mx = max(mx, n % 10), n /= 10;
        return mx;
    }

    int maxSum(vector<int>& nums) {
        int len = nums.size(), ret = -1;
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                if(f(nums[i]) == f(nums[j])) {
                    ret = max(ret, nums[i] + nums[j]);
                }
            }
        }
        return ret;
    }
};