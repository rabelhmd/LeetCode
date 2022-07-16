class Solution {
public:
    
    int row, col;
    int dp[201][201];
    
    int getMin(int x, int y, vector<vector<int>>& grid) {
        if(x < 0 || y < 0 || x >= row || y >= col) return INT_MAX;
        if(x == row-1 && y == col-1) return grid[x][y];

        int &ret = dp[x][y];
        if(~ret) return ret;
        ret =  grid[x][y] + min(getMin(x+1, y, grid), getMin(x, y+1, grid));
        return ret;
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        row = grid.size();
        col = grid[0].size();
        return getMin(0, 0, grid);
    }
};