class Solution {
public:
    vector<int> dir = {0, 1, 0, -1, 0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        queue<pair<int, int>> q;
        for (int r = 0; r < m; r++) {
            for(int c = 0; c < n; c++) {
                if(mat[r][c] == 0) {
                    q.push({r, c});
                    continue;
                }
                mat[r][c] = -1;
            }
        }

        while (!q.empty()) {
            auto [r, c] = q.front(); q.pop();
            for (int i = 0; i < 4; ++i) {
                int x = r + dir[i], y = c + dir[i+1];
                if (x < 0 || x == m || y < 0 || y == n || mat[x][y] != -1) continue;
                mat[x][y] = mat[r][c] + 1;
                q.push({x, y});
            }
        }
        return mat;
    }
};