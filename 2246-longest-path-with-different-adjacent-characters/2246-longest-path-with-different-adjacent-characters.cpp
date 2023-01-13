class Solution {
public:
    
    vector <vector<int>> adj;
    string letters;
    
    void update_max(int x, int& path1, int& path2) {
        if(x >= path1) path2 = path1, path1 = x;
        else if(x >= path2) path2 = x;
    }

    int dfs(int u, int p, int& _best) {
        int path1 = 0, path2 = 0;
        for(auto& v : adj[u]) {
            if(v == p) continue;
            int cur = dfs(v, u, _best);
            if(letters[u] != letters[v])
                update_max(cur, path1, path2);
        }
        _best = max({_best, path1 + path2 + 1});
        return 1 + path1;
    }

    void add_edge(int u, int v) {
        adj[u].push_back(v), adj[v].push_back(u);
    }

    int longestPath(vector<int>& parent, string& s) {
        int len = parent.size();
        adj = vector <vector<int>> (len);
        letters = s;
        for(int i = 1; i < len; i++) add_edge(i, parent[i]);
        int _best = 0;
        dfs(0, -1, _best);
        return _best;
    }
};