class Solution {
public:
    
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int row, col;
    bool flag[201][201];
    
    pair<int, int> dfs(int x, int y, vector<vector<int>>& H) {
        if(x < 0 || y < 0 || x >= row || y >= col) {
            return {x < 0 || y < 0, x >= row || y >= col};
        }
        
        flag[x][y] = true;
        bool f = false, s = false;
        for(int i = 0; i < 4; i++) {
            int r = x + dx[i];
            int c = y + dy[i];

            if(r < 0 || c < 0 || r >= row || c >= col || (H[r][c] <= H[x][y] && flag[r][c] ==false)) {
                pair<int, int> cur = dfs(r, c, H);
                f |= cur.first;
                s |= cur.second;
            }
        }
        
        return {f, s};
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        row = heights.size();
        col = heights[0].size();
        vector<vector<int>> res;
        
        for(int i = 0; i < row; i++) {
            
            for(int j = 0; j < col; j++) {
                pair<int, int> cur = dfs(i, j, heights);
                
                if(cur.first && cur.second) {
                    res.push_back({i, j});
                }
                
                memset(flag, false, sizeof(flag));
            }
        }
        
        return res;
    }
};