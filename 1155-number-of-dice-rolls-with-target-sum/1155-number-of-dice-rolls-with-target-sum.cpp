class Solution {
public:
    int dp[31][1001] = {};
    
    int numRollsToTarget(int d, int f, int target, int res = 0) {
        if (d == 0 || target <= 0) return d == target;
        int &ret = dp[d][target];
        if (ret) return ret - 1;
        for (auto i = 1; i <= f; ++i)
            res = (res + numRollsToTarget(d - 1, f, target - i)) % 1000000007;
        ret = res + 1;
        return res;
    }
};