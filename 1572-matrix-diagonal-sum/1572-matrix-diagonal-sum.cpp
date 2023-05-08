class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret = 0, len = mat.size();
        for(int i = 0; i < len; i++) {
            ret += mat[i][i];
            ret += mat[i][len-i-1];
        }
        
        if(len&1) return ret -= mat[len/2][len/2];
        return ret;
    }
};