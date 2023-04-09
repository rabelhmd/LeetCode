class Solution {
public:
    int getCount(int &len, int &k, vector<int> &indegrees, unordered_set<int> &zero, string &colors, vector<vector<int>> &graph) {
        vector<vector<int>> counts(len, vector<int>(k, 0));
        for (int i = 0; i < len; i++) counts[i][colors[i] - 'a']++;
        
        int ret = 0, visited = 0;
        while (!zero.empty()) {
            int u = *zero.begin();
            zero.erase(u);
            visited += 1;
            
            for(int v: graph[u]) {
                for (int i = 0; i < k; i++) {
                    int &cur = counts[v][i];
                    int sum = counts[u][i] + (colors[v] - 'a' == i ? 1 : 0);
                    cur = max(cur, sum);
                }
                indegrees[v] -= 1;
                if(indegrees[v] == 0) zero.insert(v);
            }
            ret = max(ret, *max_element(counts[u].begin(), counts[u].end()));
        }
        return visited == len ? ret : -1;
    }
    
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int len = colors.size(), k = 26;
        vector<int> indegrees(len, 0);
        vector<vector<int>> graph(len, vector<int>());
        
        for(vector<int>& edge: edges) {
            int &u = edge[0], &v = edge[1];
            graph[u].push_back(v);
            indegrees[v] += 1;
        }
        
        unordered_set<int> zero_indegree;
        for(int i = 0; i < len; i++) {
            if(indegrees[i] == 0) {
                zero_indegree.insert(i);
            }
        }
        
        return getCount(len, k, indegrees, zero_indegree, colors, graph);
    }
};


