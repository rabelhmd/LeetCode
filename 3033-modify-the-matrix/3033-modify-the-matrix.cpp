class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            int mx = -1;
            for (int i = 0; i < matrix.size(); ++i)
                mx = max(mx, matrix[i][j]);
            for (int i = 0; i < matrix.size(); ++i)
                matrix[i][j] = matrix[i][j] == -1 ? mx : matrix[i][j];
        }
        return matrix;
    }
};