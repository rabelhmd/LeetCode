class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n, vector <int> ());
        vector <int> degree(n, 0);
        for(auto &v: pre) {
            adj[v[1]].push_back(v[0]);
            degree[v[0]] += 1;
        }
        
        queue <int> q;
        for(int i = 0; i < n; i++) {
            if(degree[i] == 0) q.push(i);
        }
        
        vector <int> ret;
        while(!q.empty()) {
            int u = q.front(); q.pop();
            ret.push_back(u);
            for(auto &v: adj[u]) {
                degree[v] -= 1;
                if(degree[v] == 0) {
                    q.push(v);
                }
            }
        }
        if(ret.size() != n) return {};
        return ret;
    }
};