class Solution {
public:
    void dfs(const vector<vector<int>> &graph, int start, int end, vector<int> &path,
            vector<vector<int>> &ret) {
        if(start == end) {
            ret.push_back(path); return;
        }
        
        for(int next: graph[start]) {
            path.push_back(next);
            dfs(graph, next, end, path, ret);
            path.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        const int len = size(graph);
        vector<vector<int>> ret; vector<int> path;
        path.reserve(len); path.push_back(0);
        
        dfs(graph, 0, len-1, path, ret);
        return ret;
    }
};