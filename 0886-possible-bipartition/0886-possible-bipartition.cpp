class Solution {
public:
    bool bfs(int n, vector<vector<int>> &graph) {
        queue<int> q;
        vector<int> seen(n, 0);
        for(int i = 0; i < n; i++) {
            if(seen[i] != 0) continue;
            q.push(i); seen[i] = 1;
            while(!q.empty()) {
                for(int j = 0; j < q.size(); j++) {
                    int u = q.front(); q.pop();
                    for(int k = 0; k < graph[u].size(); k++) {
                        int v = graph[u][k];
                        if(seen[v] == 0){
                            q.push(v); seen[v] = (seen[u] == 1) ? 2 : 1;
                        }
                        if(seen[u] == seen[v]) return false;
                    }
                }
            }
        }
        return true;
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n, vector<int>());
        for(int i = 0; i < dislikes.size(); i++){
            int u = dislikes[i][0] - 1;
            int v = dislikes[i][1] - 1;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        return bfs(n, graph);
    }
};