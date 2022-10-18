class Solution {
public:
    int visit[5005];
    vector<int> graph[100005];
    
    bool canFinish(int n, vector<vector<int>>& info) {
        for(auto &pr: info) {
            int x = pr[0];
            int y = pr[1];
            graph[y].push_back(x);
            visit[x] += 1;
        }
        
        queue <int> q;
        for(int i = 0; i < n; i++) if(visit[i] == 0) q.push(i);
        
        while(!q.empty()) {
            int x = q.front(); q.pop(); n -= 1;
            
            for(auto &v: graph[x]) {
                visit[v] -= 1;
                if(visit[v] == 0) q.push(v);
            }
        }
        
        return n == 0;
    }
};