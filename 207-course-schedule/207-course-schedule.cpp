class Solution {
public:
    
    bool topSort(int n, vector <pair<int, int>> P) {
        vector<vector<int>> adj(n);
        vector<int> degree(n);
        for(auto &x: P) {
            adj[x.second].push_back(x.first);
            degree[x.first] += 1;
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
        vector <pair<int, int>> _p;
        for(auto &x: pre) {
            _p.push_back({x[0], x[1]});
        }
        return topSort(numCourses, _p);
    }
};