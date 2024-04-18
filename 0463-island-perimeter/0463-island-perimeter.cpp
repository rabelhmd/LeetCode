class Solution {
public:
    int dir[5] = {0, 1, 0, -1, 0};
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int row = grid.size(), col = grid[0].size(), perimeter = 0;
        for(int r = 0; r < row; r++) {
            for(int c = 0; c < col; c++) {
                if(!grid[r][c]) continue;
                perimeter += 4;
                for(int i = 0; i < 4; i++) {
                    int nr = r + dir[i], nc = c + dir[i+1];
                    if(nr < 0 || nr >= row || nc < 0 || nc >= col || grid[nr][nc] == 0) continue;
                    perimeter -= 1;
                }
            }
        }
        return perimeter;
    }
};