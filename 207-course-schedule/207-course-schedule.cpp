class Solution {
public:
    
    bool topSort(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n, vector <int>());
        vector<int> degree(n, 0);
        for(auto &x: pre) {
            adj[x[1]].push_back(x[0]);
            degree[x[0]] += 1;
        }
    
        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(degree[i] == 0) q.push(i);
        }
        
        while(!q.empty()) {
            int u = q.front(); q.pop();
            n--;
            for(auto v: adj[u]) {
                degree[v]--;
                if(degree[v] == 0) q.push(v);
            }
        }
        return n == 0;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        return topSort(numCourses, pre);
    }
};