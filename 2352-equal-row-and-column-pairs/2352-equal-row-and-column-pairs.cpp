class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int>, int> Mp;
        int ret = 0, row = grid.size(), col = grid[0].size();
        
        for(int i = 0; i < row; i++) Mp[grid[i]] += 1;
        
        for(int i = 0; i < row; i++) {
            vector <int> v;
            for(int j = 0; j < col; j++) {
                v.push_back(grid[j][i]);
            }
            ret += Mp[v];
        }
        return ret;
    }
};