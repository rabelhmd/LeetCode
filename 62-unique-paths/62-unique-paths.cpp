class Solution {
public:
    
    int dp[101][101];
    int rec(int x, int y, int& row, int& col) {
        if(x > row || y > col) return 0;
        if(x == row && y == col) return 1;
        int &ret = dp[x][y];
        if(~ret) return ret;
        ret = rec(x + 1, y, row, col) + rec(x, y + 1, row, col);
        return ret;
    }
    
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        m -= 1, n -= 1;
        return rec(0, 0, m, n);
    }
};