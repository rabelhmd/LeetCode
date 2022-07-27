class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans = matrix;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = matrix[j][i];
            }
            reverse(ans[i].begin(), ans[i].end());
        }
        matrix = ans;
    }
};