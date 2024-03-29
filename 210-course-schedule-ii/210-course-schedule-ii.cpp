class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector <vector<int>> adj(n, vector<int>());
        vector<int> degree(n, 0);
        for(auto &x: pre) {
            adj[x[1]].push_back(x[0]);
            degree[x[0]] += 1;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(degree[i] == 0) q.push(i);
        }
        
        vector<int> ret;
        while(!q.empty()) {
            int u = q.front(); q.pop(); ret.push_back(u);
            for(auto &v: adj[u]) {
                if(--degree[v] == 0) q.push(v);
            }
        }
        if(ret.size() != n) return {};
        return ret;
    }
};