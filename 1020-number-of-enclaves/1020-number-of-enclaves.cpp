class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j) {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size())
            return;
        if(grid[i][j] != 1) return;
        
        grid[i][j] = 0;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int ret = 0,  m = grid.size(), n = grid[0].size();
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if((i == 0 or j == 0 or i == m-1 or j == n-1)){
                    dfs(grid, i, j);
                }
            }
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ret += grid[i][j] == 1;
            }
        }
        return ret;
    }
};