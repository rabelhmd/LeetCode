class Solution {
public:
    int m, n;
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    bool isvalid(int x, int y) {
        return x >= 0 and y >= 0 and x < m and y < n;
    }
    
    int dfs(int x, int y, int blank, pair<int, int> &dest, vector<vector<int>> &grid) {
        if (blank < 0 && pair<int, int>(x, y) == dest)
            return 1;
        grid[x][y] = -1;
        int ret = 0;
        for (int k = 0; k < 4; k++) {
            int i = x + dx[k], j = y + dy[k];
            
            if (isvalid(i, j) && grid[i][j] != -1)
                ret += dfs(i, j, blank - 1, dest, grid);
        }
        grid[x][y] = 0;
        return ret;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int blank = 0;
        pair <int, int> src, dest;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) blank += 1;
                if(grid[i][j] == 1) src = {i, j};
                if(grid[i][j] == 2) dest = {i, j};
            }
        }
        return dfs(src.first, src.second, blank, dest, grid);
    }
};