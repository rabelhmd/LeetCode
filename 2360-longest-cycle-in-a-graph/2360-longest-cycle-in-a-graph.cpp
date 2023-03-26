class Solution {
public:
    void dfs(int node, vector<int>& edges, unordered_map<int, int>& dist, vector<bool>& visit, int& ret) {
        visit[node] = true;
        int neighbor = edges[node];
        
        if(neighbor != -1 and !visit[neighbor]) {
            dist[neighbor] = dist[node] + 1;
            dfs(neighbor, edges, dist, visit, ret);
            return;
        }
        
        if(neighbor != -1 and dist.count(neighbor)) {
            ret = max(ret, dist[node] - dist[neighbor] + 1);
        }
    }
    
    int longestCycle(vector<int>& edges) {
        int len = edges.size();
        vector <bool> visit(len);
        
        int ret = -1;
        for(int i = 0; i < len; i++) {
            if(!visit[i]) {
                unordered_map <int, int> dist;
                dist[i] = 1;
                dfs(i, edges, dist, visit, ret);
            }
        }
        return ret;
    }
};