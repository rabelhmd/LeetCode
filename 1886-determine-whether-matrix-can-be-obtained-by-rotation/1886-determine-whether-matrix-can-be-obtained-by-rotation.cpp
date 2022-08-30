class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int len = mat.size();
        int rotate = 0;
        while(rotate++ < 4) {
            if(mat == target) return true;
            
            for(int i = 0; i < len; i++) {
                for(int j = 0; j < i; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            
            for(int i = 0; i < len; i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
        }
        return false;
    }
};