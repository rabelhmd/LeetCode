class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    bool isBip(int i, vector<vector<int>>& graph, int& n) {
        vector<int> colors(n, -1);
        queue<int> q; q.push(i); colors[i] = 0;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int& e: graph[cur]) {
                if (colors[e] == -1) {
                    colors[e] = 1 - colors[cur];
                    q.push(e);
                }
                else if (colors[e] == colors[cur]) {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        faster();
        int n = graph.size();
        for(int i = 0; i < n; i++) {
            if(!isBip(i, graph, n)) return false;
        }
        return true;
    }
};