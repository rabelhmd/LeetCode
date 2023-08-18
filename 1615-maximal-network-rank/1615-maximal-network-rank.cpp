class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>> g(n);
        
        for (const auto& road: roads) {
            g[road[0]].insert(road[1]);
            g[road[1]].insert(road[0]);
        }
        
        int ret = 0;
        for(int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int rank = g[i].size() + g[j].size();
                if (g[j].count(i)) rank--;
                ret = max(ret, rank);
            }
            
        }
        return ret;
    }
};