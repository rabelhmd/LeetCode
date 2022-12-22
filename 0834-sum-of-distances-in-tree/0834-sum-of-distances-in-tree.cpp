class Solution {
public:
    vector<vector<int>> graph;
    vector<int> counter, ret;
    
    void dfs(int cur, int p = -1) {
        for(auto &u: graph[cur]) {
            if(u == p) continue;
            dfs(u, cur);
            counter[cur] += counter[u];
            ret[cur] += ret[u] + counter[u];
        }
        counter[cur] += 1;
    }
    
    void rec(int cur, int n, int p = -1) {
        for(auto &u: graph[cur]) {
            if(u == p) continue;
            ret[u] = ret[cur] - counter[u] + n - counter[u];
            rec(u, n, cur);
        }
    }
    
    void makeGraph(int n, vector<vector<int>>& edges) {
        graph.resize(n);
        for(int i = 0; i < n - 1; i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    }
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        makeGraph(n, edges);
        ret.resize(n);
        counter.resize(n);
        
        dfs(0);
        rec(0, n);
        return ret;
    }
};