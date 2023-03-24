class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n), back(n);
        for(auto &a: connections) {
            adj[a[0]].push_back(a[1]);
            back[a[1]].push_back(a[0]);
        }
        
        queue <int> q; q.push(0);
        vector <bool> visit(n, false);
        int ret = 0;
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            visit[cur] = true;
            for(auto &node: adj[cur]) {
                if(!visit[node]) {
                    visit[node] = true;
                    ret += 1;
                    q.push(node);
                }
            }
            for(auto &node: back[cur]) {
                if(!visit[node]) {
                    visit[node] = true;
                    q.push(node);
                }
            }
        }
        return ret;
    }
};