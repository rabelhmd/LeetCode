class Solution {
public:
    
    int dp[12][4096] = {};
    int dfs(vector<vector<int>>& graph, int& len, int visited, int i, int count) {
        int res = len * 2;
        int& f = dp[i][visited];
        if (f > 0) return f - 1;
        if ((visited & (1 << i)) == 0) ++count;
        if (count == len) return 0;        
        if (~f) {
            f = -1;
            for (auto j : graph[i])
                res = min(res, 1 + dfs(graph, len, visited | (1 << i), j, count));
            f = res + 1;
        }
        return res;
    }
    
    int shortestPathLength(vector<vector<int>>& graph, int res = INT_MAX) {
        int len = graph.size();
        if (len < 4) return len - 1;
        for (int i = 0; i < len; i++) res = min(res, dfs(graph, len, 0, i, 0));
        return res;
    }
};