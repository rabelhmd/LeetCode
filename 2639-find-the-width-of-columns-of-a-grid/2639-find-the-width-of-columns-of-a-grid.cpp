int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size(); 
        vector <int> ret;
        for(int i = 0; i < c; i++) {
            int mx = 0;
            for(int j = 0; j < r; j++) {
                int n = grid[j][i], count = 0;
                if(n <= 0) n *= (-1), count = 1;
                while(n) {
                    count += 1, n /= 10;
                }
                mx = max(mx, count);
            }
            ret.push_back(mx);
        }
        return ret;
    }
};