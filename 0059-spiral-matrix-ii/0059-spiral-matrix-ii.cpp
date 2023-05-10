class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int col = n, row = n;
        int left = 0, right = col-1, top = 0, bottom = row-1;
        int dir = 0, count = 1;
        vector<vector<int>> mat(n , vector<int> (n, 0));
        while(left <= right and top <= bottom) {
            if(dir == 0) {
                for(int i = left; i <= right; i++) {
                    mat[top][i] = count++;
                }
                top += 1, dir = 1;
            } else if(dir == 1) {
                for(int i = top; i <= bottom; i++) {
                    mat[i][right] = count++;
                }
                right -= 1, dir = 2;
            } else if(dir == 2) {
                for(int i = right; i >= left; i--) {
                    mat[bottom][i] = count++;
                }
                bottom -= 1, dir = 3;
            } else if(dir == 3) {
                for(int i = bottom; i >= top; i--) {
                    mat[i][left] = count++;
                }
                left += 1; dir = 0;
            }
        }
        return mat;
    }
};