class Solution {
public:
    void dfs(int& src, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[src] = true;
        for(auto&x : adj[src]) {
            if(!vis[x]) {
                dfs(x, adj, vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j and isConnected[i][j]) {
                    adj[i].push_back(j);
                }
            }
        }
        
        vector <bool> vis(n, false);
        int ret = 0;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                ret += 1;
                dfs(i, adj, vis);
            }
        }
        return ret;
    }
};