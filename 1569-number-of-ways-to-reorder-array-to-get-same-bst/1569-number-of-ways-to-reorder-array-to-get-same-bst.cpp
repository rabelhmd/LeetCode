class Solution {
public:
    int mod = 1000000007;
    long dp[1001][1001] = { 0 };
    bool flag = false;

    long combination(int n, int r) {
        if (flag) return dp[n][r];
        dp[0][0] = 1;
        for (int i = 1; i < 1001; i++) {
            dp[i][0] = 1;
            for (int j = 1; j < i + 1; j++) {    
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod; 
            } 
        }
        flag = true;
        return dp[n][r];
    }

    long dfs(vector<int>& nums) {
        if (nums.size() < 3) return 1;
        vector<int> l, r;
        for (auto e : nums) { 
            if (e > nums[0]) l.push_back(e);
            if (e < nums[0]) r.push_back(e); 
        }
        long c = combination(l.size() + r.size(), l.size());
        return c * dfs(l) % mod * dfs(r) % mod;
    }
    
    int numOfWays(vector<int>& nums) {
        return dfs(nums) - 1;
    }
};