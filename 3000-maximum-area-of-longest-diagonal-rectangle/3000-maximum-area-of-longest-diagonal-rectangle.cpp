class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int ret = 0, diag = 0;
        for(auto d: dim) {
            int t = d[0] * d[0] + d[1] * d[1];
            if(t > diag or (t == diag and d[0]*d[1] > ret)) {
                diag = t;
                ret = d[0] * d[1];
            }
        }
        return ret;
    }
};