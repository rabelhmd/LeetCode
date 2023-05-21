class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    int dir[5] = {0, 1, 0, -1, 0};
    
    void rec(vector<vector<int>>& A, int i, int j, vector<pair<int, int>> &q) {
        if (min(i, j) >= 0 && max(i, j) < A.size() && A[i][j] == 1) {
            A[i][j] = 2;
            q.push_back({i, j});
            for (int d = 0; d < 4; ++d)
                rec(A, i + dir[d], j + dir[d + 1], q);
        }
    }
    
    int shortestBridge(vector<vector<int>>& A) {
        faster();
        vector<pair<int, int>> q;
        for (int i = 0; q.size() == 0 && i < A.size(); i++) {
            for (int j = 0; q.size() == 0 && j < A[0].size(); j++) {
                rec(A, i, j, q);
            }
        }
        
        while (!q.empty()) {
            vector<pair<int, int>> temp;
            for (auto [i, j] : q) {
                for (int d = 0; d < 4; ++d) {
                    int x = i + dir[d], y = j + dir[d + 1];
                    if (min(x, y) >= 0 && max(x, y) < A.size()) {
                        if (A[x][y] == 1) {
                            return A[i][j] - 2;
                        }
                        if (A[x][y] == 0) {
                            A[x][y] = A[i][j] + 1;
                            temp.push_back({x, y});
                        }
                    }
                }
            }
            swap(q, temp);
        }
        return 0;
    }
};