class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        
        vector <int> rows(row), cols(col);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                rows[i] += grid[i][j];
                cols[j] += grid[i][j];
            }
        }
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                grid[i][j] = rows[i] + cols[j] - (row - rows[i]) - (col - cols[j]);
            }
        }
        return grid;
    }
};