class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left = 1, right = cells.size(), ret = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canWalk(cells, row, col, mid)) {
                ret = mid;
                left = mid + 1;
            } else right = mid - 1;
        }
        
        return ret;
    }
    
    int DIR[5] = {0, 1, 0, -1, 0};
    
    bool canWalk(vector<vector<int>>& cells, int row, int col, int dayAt) {
        vector<vector<bool>> grid(row, vector<bool>(col, 0));
        for (int i = 0; i < dayAt; i++) {
            grid[cells[i][0]-1][cells[i][1]-1] = 1;
        }
        
        queue <pair<int, int>> q;
        for (int i = 0; i < col; i++) {
            if (grid[0][i] == 0) {
                q.push({0, i});
                grid[0][i] = 1;
            }
        }
        
        while (!q.empty()) {
            auto [r, c] = q.front(); q.pop();
            if (r == row - 1) return true;
            for (int i = 0; i < 4; i++) {
                int nr = r + DIR[i], nc = c + DIR[i+1];
                if (nr < 0 || nr == row || nc < 0 || nc == col || grid[nr][nc] == 1) continue;
                grid[nr][nc] = 1;
                q.push({nr, nc});
            }
        }
        return false;
    }
};