const int offset = 5000;
class Solution {
public:
    int dp[21][2 * offset + 1];
    int solve(int pos, int diff, vector<int>& rods, int n) {
        if (pos == n) {
            return diff == 0 ? 0 : INT_MIN;
        }
        int &ret = dp[pos][diff + offset];
        if (ret != -1) return ret;
        int a = solve(pos + 1 , diff, rods, n);
        int b = rods[pos] + solve(pos + 1 , diff + rods[pos], rods, n);
        int c = solve(pos + 1 , diff - rods[pos], rods, n);
        return ret = max({a, b, c});
    }
    
    int tallestBillboard(vector<int>& rods) {
        memset(dp , -1 , sizeof(dp));
        return max(0, solve(0, 0, rods, rods.size()));
    }
};