class Solution {
public:
    
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int left = 0, right = col-1, top = 0, bottom = row-1;
        int dir = 0;
        
        vector <int> ret;
        while(left <= right and top <= bottom) {
            if(dir == 0) {
                for(int i = left; i <= right; i++) {
                    ret.push_back(mat[top][i]);
                }
                top += 1, dir = 1;
            } else if(dir == 1) {
                for(int i = top; i <= bottom; i++) {
                    ret.push_back(mat[i][right]);
                }
                right -= 1, dir = 2;
            } else if(dir == 2) {
                for(int i = right; i >= left; i--) {
                    ret.push_back(mat[bottom][i]);
                }
                bottom -= 1, dir = 3;
            } else if(dir == 3) {
                for(int i = bottom; i >= top; i--) {
                    ret.push_back(mat[i][left]);
                }
                left += 1; dir = 0;
            }
        }
        return ret;
    }
};