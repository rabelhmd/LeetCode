class Solution {
 public:
    int dfs(const vector<vector<int>>& graph, int u, int prev, int seats, long long& ans) {
        int ret = 1;
        for (const int v : graph[u]) {
          if (v == prev) continue;
          ret += dfs(graph, v, u, seats, ans);
        }
        
        if (u > 0) ans += (ret + seats - 1) / seats;
        return ret;
  }
    
  long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
    long long res = 0;
    vector<vector<int>> graph(roads.size() + 1);

    for (const vector<int>& road : roads) {
      int u = road[0], v = road[1];
      graph[u].push_back(v);
      graph[v].push_back(u);
    }

    dfs(graph, 0, -1, seats, res);
    return res;
  }
    
};