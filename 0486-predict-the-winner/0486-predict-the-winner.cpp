class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> dp(len, vector<int>(len));
        for (int i = 0; i < len; i++) dp[i][i] = nums[i];
        
        for (int i = 1; i < len; i++) {
            for (int j = 0; j+i < len; j++) {
                int a = nums[j+i] - dp[j][j+i-1];
                int b = nums[j] - dp[j+1][j+i];
                dp[j][j+i] = max(a, b);
            }
        }
        return dp[0][len-1] >= 0;
    }
};