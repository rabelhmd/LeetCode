class Solution {
public:
    int bfs(int& n, vector<vector<pair<int, int>>>& adj) {
        vector<bool> visit(n + 1);
        queue<int> q; int ret = INT_MAX;
        
        q.push(1); visit[1] = true;
        while(!q.empty()) {
            int node = q.front(); q.pop();
            
            for(auto& edge: adj[node]) {
                ret = min(ret, edge.second);
                if(!visit[edge.first]) {
                    visit[edge.first] = true;
                    q.push(edge.first);
                }
            }
        }
        return ret;
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n+1);
        for(auto& road: roads) {
            int&x = road[0], &y = road[1], &z = road[2];
            adj[x].push_back({y, z});
            adj[y].push_back({x, z});
        }
        return bfs(n, adj);
    }
};