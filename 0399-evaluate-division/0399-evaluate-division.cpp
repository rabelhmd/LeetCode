class Solution {
    unordered_map<string, vector<pair<string, double>>> adjList;
    unordered_map<string, bool> visited;
    double queryAns;
    
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    bool dfs(string startNode, string endNode, double runningProduct) {
        if(startNode == endNode and adjList.find(startNode) != adjList.end()) {
            queryAns = runningProduct;
            return true;
        }
        
        bool ret = false;
        visited[startNode] = true;
        for(int i = 0; i < adjList[startNode].size(); i++) {
            if(!visited[adjList[startNode][i].first]) {
                ret = dfs(adjList[startNode][i].first, endNode, runningProduct*adjList[startNode][i].second);
                if(ret) break;
            }
        }
        visited[startNode] = false;
        return ret;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        faster();
        int n = equations.size(), m = queries.size();
        vector<double> ret(m);
        for(int i = 0; i < n; i++) {
            adjList[equations[i][0]].push_back({equations[i][1], values[i]});
            adjList[equations[i][1]].push_back({equations[i][0], 1/values[i]});
            visited[equations[i][0]] = false; visited[equations[i][1]] = false;
        }
        
        for(int i = 0; i < m; i++) {
            queryAns = 1;
            bool found = dfs(queries[i][0], queries[i][1], 1);            
            if(found) ret[i] = queryAns;
            else ret[i] = -1;
        }
        return ret;
    }
};