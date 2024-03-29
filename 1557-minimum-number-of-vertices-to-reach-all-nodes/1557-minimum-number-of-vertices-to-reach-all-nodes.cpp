int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> out;
        vector<bool> in(n, false);
        for(auto &edge: edges) in[edge[1]] = true;
        for(int i = 0; i < n; i++) if(!in[i]) out.push_back(i);
        return out;
    }
};