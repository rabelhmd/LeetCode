class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = rows > 0 ? matrix[0].size() : 0;
        
        vector<vector<int>> ret(cols);
        for(int i = 0; i < cols; i++) {
            for(int j = 0; j < rows; j++) {
                ret[i].push_back(matrix[j][i]);
            }
        }
        return ret;
    }
};