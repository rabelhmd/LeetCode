class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> g;
        vector<vector<int>> ret;
        int len = groupSizes.size();
        for (int i = 0; i < len; i++) {
            int cur = groupSizes[i];
            g[cur].push_back(i);
            if (g[cur].size() == cur) {
                ret.push_back(g[cur]);
                g[cur].clear();
            }
        }
        return ret;
    }
};