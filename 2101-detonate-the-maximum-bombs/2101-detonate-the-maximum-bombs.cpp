class Solution {
public:
    #define LL long long
    void dfs(int& src, int& count, vector<bool>& vis, vector<vector<int>>& adj){
        vis[src] = true; count += 1;
        for(int& x: adj[src]) {
            if(vis[x] == false) {
                dfs(x, count, vis, adj);
            }
        }
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n);
        
        for(int i =0; i < n; i++) {
            LL x1 = bombs[i][0];
            LL y1 = bombs[i][1];
            LL r = bombs[i][2];

            for(int j = 0; j < n; j++) {
                if(i != j) {
                    LL x2 = bombs[j][0];
                    LL y2 = bombs[j][1];
                    LL x = (x1-x2) * (x1-x2);
                    LL y = (y1-y2) * (y1-y2);
                    if(x + y <= r * r) {
                        adj[i].push_back(j); 
                    }
                }
            }
        }
        
        int ret = 0;
        for(int i = 0; i < n; i++) {
            vector<bool> vis(n);
            int count = 0;
            dfs(i, count, vis, adj); 
            ret = max(ret, count);
        }
        return ret;
    }
};