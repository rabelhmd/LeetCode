class Solution {
public:
    
    int mod = (int) 1e9 + 7;
    int dp[55][55][55], row, col;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    int floodFill(int x, int y, int curMove, int& maxMove) {
        if(x < 0 || y < 0 || x >= row || y >= col) return 1;
        if(curMove == maxMove) return 0;
        
        int &ret = dp[curMove][x][y];
        if(~ret) return ret % mod;
        
        ret = 0;
        for(int i = 0; i < 4; i++) {
            ret += floodFill(x + dx[i], y + dy[i], curMove + 1, maxMove);
            ret %= mod;
        }
        return ret % mod;
    }
    
    int findPaths(int m, int n, int maxMove, int x, int y) {
        memset(dp, -1, sizeof(dp));
        row = m, col = n;
        return floodFill(x, y, 0, maxMove);
    }
};