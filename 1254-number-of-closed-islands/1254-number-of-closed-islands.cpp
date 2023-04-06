class Solution {
public:
    bool isClosed(vector<vector<int>>& grid, int x, int y) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[x].size()) return false;
        if(grid[x][y]) return true;
        grid[x][y] = 1;
        
        bool isLeft = isClosed(grid, x, y-1);
        bool isRight = isClosed(grid, x, y+1);
        bool isTop = isClosed(grid, x+1, y);
        bool isBottom = isClosed(grid, x-1, y);
        return isLeft && isRight && isTop && isBottom;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ret = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                ret += !grid[i][j] and isClosed(grid, i, j);
            }
        }
        return ret;
    }
};