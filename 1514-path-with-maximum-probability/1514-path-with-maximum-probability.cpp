class Solution {
public:
    void make(int &n, vector<vector<pair<int, double>>>& adj, vector<vector<int>>& edges, vector<double>& succProb) {
        for(int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
    }
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> adj(n);
        make(n, adj, edges, succProb);
        
        vector <double> dist(n, 0.0);
        dist[start] = 1.0;
        double& ret = dist[end];
        
        queue <int> q; q.push(start);
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            
            for(auto &it: adj[cur]) {
                double p = dist[cur] * it.second;
                if(p > dist[it.first]) {
                    dist[it.first] = p;
                    q.push(it.first);
                }
            }
        }
        return ret;
    }
};