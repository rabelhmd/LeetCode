class Solution {
public:
    void dfs(vector<vector<int>>& adj, int& u, vector <bool>& visit) {
        visit[u] = true;
        
        for(auto& v: adj[u]) {
            if(!visit[v]) {
                dfs(adj, v, visit);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        int len = connections.size();
        if(len < n - 1) return -1;
        
        vector<vector<int>> adj(n);
        for(int i = 0; i < len; i++) {
            int& x = connections[i][0], &y = connections[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        int ret = 0;
        vector <bool> visit(n, false);
        for(int u = 0; u < n; u++) {
            if(!visit[u]) {
                ret += 1;
                dfs(adj, u, visit);
            }
        }
        return ret - 1;
    }
};