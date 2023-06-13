class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int>, int> Mp;
        for(int i = 0; i < grid.size(); i++) Mp[grid[i]] += 1;
        
        int ret = 0;
        for(int i = 0; i < grid.size(); i++) {
            vector <int> v;
            for(int j = 0; j < grid[0].size(); j++) {
                v.push_back(grid[j][i]);
            }
            ret += Mp[v];
        }
        return ret;
    }
};