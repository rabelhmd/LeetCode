class Solution {
public:
    
    int _max, row, col, k = 0;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    bool inValid(int x, int y) {
        if(x < 0 || y < 0 || x >= row || y >= col) return true;
        return false;
    }
    
    int floodFill(vector<vector<int>>& grid, int x, int y) {
        if(inValid(x, y)) return 0;
        
        if(grid[x][y] == 0) return 0;
        
        grid[x][y] = 0;
        
        for(int i = 0; i < 4; i++) {
            k = max(k, floodFill(grid, x + dx[i], y + dy[i]));
        }
        return k + 1;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();
        _max = 0;
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1) {
                    k = 0;
                    _max = max(_max, floodFill(grid, i, j));
                }
            }
        }
        return _max;
    }
};