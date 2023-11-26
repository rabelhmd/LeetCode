class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int ret = 0;
        
        vector <int> height(col, 0);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(matrix[i][j] == 0) height[j] = 0;
                else height[j] += 1;
            }
            vector <int> temp = height;
            sort(temp.begin(), temp.end());
            for(int j = 0; j < col; j++) ret = max(ret, temp[j] * (col - j));
        }
        return ret;
    }
};