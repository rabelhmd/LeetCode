class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        for(int i = 1; i < r; i++) {
            for(int j = 1; j < c; j++) {
                if(mat[i][j] != mat[i-1][j-1]) return false;
            }
        }
        return true;
    }
};