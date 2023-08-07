class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int r = 0;
        int c = cols;
        c--;
        
        while(r < rows && c >= 0) {
            
            int cur = matrix[r][c];
            if(cur == target) {
                return true;
            }
            
            if(cur < target) {
                r += 1;
                continue;
            }
            c -= 1;
        }
        
        return false;
    }
};