class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        vector<int> rows(r), cols(c);
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j]) rows[i] += 1, cols[j] += 1;
            }
        }
        
        int ret = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j] and rows[i] == 1 and cols[j] == 1) ret += 1;
            }
        }
        return ret;
    }
};