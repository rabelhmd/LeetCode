class Solution {
public:
    
    int dp[101][101];
    
    int track(int x, int y, int& row, int& col) {
        if(x > row || y > col) return 0;
        
        if(x == row && y == col) return 1;
        
        int &ret = dp[x][y];
        if(~ret) return ret;
        
        ret = track(x+1, y, row, col) + track(x, y+1, row, col);
        return ret;
    }
    
    int uniquePaths(int r, int c) {
        memset(dp, -1, sizeof(dp));
        r--, c--;
        return track(0, 0, r, c);
    }
};