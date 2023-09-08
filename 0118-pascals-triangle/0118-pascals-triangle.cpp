class Solution {
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>> ret(r);
        for(int i = 0; i < r; i++) {
            ret[i].push_back(1);
            for(int j = 1; j < i; j++) {
                ret[i].push_back(ret[i-1][j-1] + ret[i-1][j]);
            }
            if(i) ret[i].push_back(1);
        }
        return ret;
    }
};