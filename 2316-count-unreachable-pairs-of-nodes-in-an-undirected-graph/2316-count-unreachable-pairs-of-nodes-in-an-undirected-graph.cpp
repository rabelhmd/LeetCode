class Solution {
public:
    void dfs(vector<vector<int>>& adj, int src, vector <int>& visit, int& count) {
        if(visit[src]) return; 
        
        visit[src] = true; 
        count += 1;
        for(auto& e: adj[src]) {
            if(!visit[e]) dfs(adj, e, visit, count);
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto& e: edges) {
            int&x = e[0], &y = e[1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        long long ret = 0;
        vector <int> visit(n, false);
        int sum = 0, count = 0;
        for(int i = 0; i < n; i++) {
            if(visit[i]) continue;
            count = 0;
            dfs(adj, i, visit, count);
            ret += (1ll * sum*count);
            sum += count;
        }
        return ret;
    }
};