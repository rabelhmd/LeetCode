class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int len = nums.size(), ret = 0;
        int mx = *max_element(nums.begin(), nums.end());
        vector<vector<int>> dp(2 * mx + 1, vector<int>(len, 0));
        
        for(int i = 1; i < len; i++) {
            for(int j = 0; j < i; j++) {
                int diff = nums[i] - nums[j] + mx;
                int &cur = dp[diff][i];
                cur = dp[diff][j] + 1;
                ret = max(ret, cur);
            }
        }
        return ret + 1;
    }
};