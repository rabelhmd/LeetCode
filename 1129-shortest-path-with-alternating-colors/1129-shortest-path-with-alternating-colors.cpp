class Solution {
public:
    
    void constructGraph(vector<vector<pair<int,int>>>& graph, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        for(auto edge: red_edges)
            graph[edge[0]].emplace_back(edge[1], 0);
        for(auto edge: blue_edges)
            graph[edge[0]].emplace_back(edge[1], 1);
    }
    
    void bfs(vector<int>& dist, vector<vector<pair<int,int>>>& graph) {
        queue<vector<int>> q;
        q.emplace(vector<int>{0,0,-1});
        while(!q.empty()) {
            auto front = q.front(); q.pop();
            dist[front[0]] = dist[front[0]] != -1 ? dist[front[0]] : front[1];
            for(auto &adj : graph[front[0]]) {
                if(front[2] != adj.second && adj.first!= -1) {
                    q.emplace(vector<int>{adj.first, front[1] + 1, adj.second});
                    adj.first = -1;
                }
            }
        }
    }
    
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
		vector<vector<pair<int,int>>> graph(n);
        
        constructGraph(graph, red_edges, blue_edges);
        
        vector<int> dist(n,-1);
        bfs(dist, graph);
        return dist;
    }
};