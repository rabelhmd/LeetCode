class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& info) {
        vector <vector<int>> adj(n, vector<int>());
        vector <int> degree(n, 0);
        for(auto &x: info) {
            int niteChai = x[1];
            int lagbe = x[0];
            adj[niteChai].push_back(lagbe);
            degree[lagbe] += 1;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(degree[i] == 0) q.push(i);
        }
        
        while(!q.empty()) {
            int u = q.front(); q.pop(); n -= 1;
            for(auto &v: adj[u]) {
                degree[v] -= 1;
                if(degree[v] == 0) q.push(v);
            }
        }
        return n == 0;
    }
};