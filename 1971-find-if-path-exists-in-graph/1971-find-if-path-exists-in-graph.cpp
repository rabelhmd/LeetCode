class Solution {
public:
    bool dfs(int cur, int dest, unordered_map<int, vector <int>>&graph,vector<int>&seen) {
        if(cur == dest) return true;
        if(!seen[cur]) {
            seen[cur] = true;
            for(auto &nextNode: graph[cur]) {
                if(dfs(nextNode, dest, graph, seen)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map <int,vector<int>> graph;
        for(auto &e: edges) {
            int a = e[0], b = e[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector <int> seen(n);
        return dfs(source, destination, graph, seen);
    }
};