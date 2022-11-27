class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ret = 0;
        int len = nums.size();
        vector<unordered_map<long long, int>> dp(len);
        
        for(int i = 1; i < len; i++) {
            for(int j = 0; j < i; j++) {
                long long diff = (long long) nums[i] - nums[j];
                int cur = dp[j][diff];
                dp[i][diff] += cur + 1;
                ret += cur;
            }
        }
        return ret;
    }
};