class Solution {
public:
    
  vector<int> dfs(vector<vector<int>> &adj, string &labels, int i,vector<int>&ret) {
    vector<int> ans(26, 0);
    ret[i] = 1;
    ans[labels[i] - 'a'] = 1;
    for(int j = 0; j != adj[i].size(); j++) {
        if(!ret[adj[i][j]]) {
            vector<int> now = dfs(adj, labels,adj[i][j], ret);
            for(int k = 0; k != 26; k++) ans[k] += now[k];
        }
    }
    ret[i] = ans[labels[i] - 'a'];
    return ans;
  }
  
  vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
      vector<vector<int>> adj(n);
      vector<int> ret(n, 0);
      for(int i = 0; i != edges.size(); i++) {
          adj[edges[i][0]].push_back(edges[i][1]);
          adj[edges[i][1]].push_back(edges[i][0]);
      }
      dfs(adj, labels, 0, ret);
      return ret;
  }
};