class Solution {
public:
    
    int row, col;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    void rec(vector<vector<char>>& grid, int x, int y) {
        if(x < 0 || x >= row || y < 0 || y >= col) return;
        if(grid[x][y] == '0') return;
        
        grid[x][y] = '0';
        for(int i = 0; i < 4; i++) {
            rec(grid, x + dx[i], y + dy[i]);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        row = grid.size();
        col = grid[0].size();
        int count = 0;
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == '1') {
                    count += 1;
                    rec(grid, i, j);
                }
            }
        }
        
        return count;
    }
};