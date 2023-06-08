class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ret = 0;
        for(auto& row: grid) {
            for(auto& x: row) ret += (x < 0);
        }
        return ret;
    }
};