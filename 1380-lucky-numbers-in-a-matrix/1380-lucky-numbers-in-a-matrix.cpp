int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        
        int mx = -1, mn = 1e5+1;
        for(int i = 0; i < m; i++) {
            int mn = INT_MAX;
            for(int j = 0; j < n; j++) mn = min(mn, mat[i][j]);
            mx = max(mx, mn);
        }
        
        for(int i = 0; i < n; i++) {
            int mx = INT_MIN;
            for(int j = 0; j < m; j++) mx = max(mx, mat[j][i]);
            mn = min(mn, mx);
        }
        
        if(mx != mn) return {};
        return {mx};
    }
};