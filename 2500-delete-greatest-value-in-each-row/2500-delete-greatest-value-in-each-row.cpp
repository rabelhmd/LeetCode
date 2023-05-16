class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &row: grid) sort(row.rbegin(), row.rend());
        
        int ret = 0, m = grid.size(), n = grid[0].size();
        for(int i = 0; i < n; i++) {
            int mx = INT_MIN;
            for(int j = 0; j < m; j++) {
                mx = max(mx, grid[j][i]);
            }
            ret += mx;
        }
        return ret;
    }
};