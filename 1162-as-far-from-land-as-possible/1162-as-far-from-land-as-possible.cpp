class Solution {
public:
    
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    void fill(int n, int m, queue<pair<int,int>>& q, vector<vector<int>>& grid) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    q.push({i,j});
                }
            }
        }
    }

    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size(), m = grid[0].size(), level = -1;
        fill(n, m, q, grid);
        if(q.size() == 0 or q.size() == n*m)  return level;

        while(!q.empty()) {
            level++;
            int sz = q.size();
            for(int i = 0; i < sz; i++) {
                auto res = q.front(); q.pop();
                int row = res.first, col = res.second;
                for(int j = 0; j < 4; j++) {
                    int r = dx[j] + row, c = dy[j] + col;
                    if(r < 0 or c < 0 or r >= n or c >= n or grid[r][c] == 1)  continue;
                    q.push({r,c});
                    grid[r][c] = 1;
                }
            }
        }
        return level;
    }
};

