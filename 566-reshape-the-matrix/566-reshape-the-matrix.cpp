class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if(row * col != r * c) return mat;
        
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                int cur = mat[i][j];
                int pos = i*col + j;
                int x = pos/c;
                int y = pos%c;
                ans[x][y] = cur;
            }
        }
        return ans;
    }
};