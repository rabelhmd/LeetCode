class Solution {
public:
    
    vector<int> dx = {-1,-1,-1,0,0,1,1,1};
    vector<int> dy = {-1,0,1,-1,1,-1,0,1};
    
    bool isValid(int x, int y, int n, int m) {
        return x >= 0 and x <= n and y >= 0 and y <= m;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size()-1, m = n;
        if(grid[0][0] || grid[n][m]) return -1;
        
        queue <pair<int, int>> q;
        q.push({0, 0}); grid[0][0] = 1;
        while(!q.empty() and !grid[n][m]) {
            pair <int, int> pr = q.front(); q.pop();
            int a = pr.first, b = pr.second;
            for(int i = 0; i < 8; i++) {
                int x = a + dx[i];
                int y = b + dy[i];
                if(isValid(x, y, n, m) and !grid[x][y]) {
                    grid[x][y] = grid[a][b] + 1;
                    q.push({x, y});
                }
            }
        }
        return grid[n][m] ? grid[n][m] : -1;
    }
};