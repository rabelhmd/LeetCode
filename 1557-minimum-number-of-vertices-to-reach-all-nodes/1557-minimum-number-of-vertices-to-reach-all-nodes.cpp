class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ret, in(n);
        for(auto &edge: edges) in[edge[1]] += 1;
        for(int i = 0; i < n; i++) if(!in[i]) ret.push_back(i);
        return ret;
    }
};