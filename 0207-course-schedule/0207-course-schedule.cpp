class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& info) {
        vector <vector<int>> graph(n, vector<int>());
        vector <int> visit(n, 0);
        for(auto &pr: info) {
            graph[pr[1]].push_back(pr[0]);
            visit[pr[0]] += 1;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++) if(!visit[i]) q.push(i);
        
        while(!q.empty()) {
            int x = q.front(); q.pop(); n-= 1;
            for(auto &y: graph[x]) {
                visit[y] -= 1;
                if(!visit[y]) q.push(y);
            }
        }
        return n == 0;
    }
};