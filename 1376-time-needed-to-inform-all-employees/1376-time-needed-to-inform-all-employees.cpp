class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    int dfs(int src, vector <vector<int>>& adj, vector<int>& informTime, int mx = 0) {
        for(int x: adj[src]) {
            mx = max(mx, dfs(x, adj, informTime));
        }
        return informTime[src] + mx;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        faster();
        vector <vector<int>> adj(n);
        for(int i = 0; i < n; i++) {
            if(manager[i] != -1) adj[manager[i]].push_back(i);
        }
        return dfs(headID, adj, informTime);
    }
};