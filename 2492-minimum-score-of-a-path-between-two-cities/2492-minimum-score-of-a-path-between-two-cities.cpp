class Solution {
public:
    int bfs(int& n, vector<vector<int>>& roads) {
        vector <vector<int>> adj[n+1];
        for(auto &a: roads) {
            int& x = a[0], &y = a[1], &z = a[2];
            adj[x].push_back({y, z}), adj[y].push_back({x, z});
        }
        
        vector<bool> vis(n+1, false);
        queue <vector<int>> q;
        vis[1] = true; q.push({1, INT_MAX});
        
        int ret = INT_MAX;
        while(!q.empty()) {
            int cur = q.front()[0]; q.pop();
            for(auto &a: adj[cur]) {
                int &x = a[0], &y = a[1];
                ret = min(ret, y);
                if(!vis[x]) {
                    q.push({x, y});
                    vis[x] = true;
                }
            }
        }
        return ret;
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        return bfs(n, roads);
    }
};