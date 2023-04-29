class UnionFind {
private:
    vector<int> parent, rank;
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        if (rank[px] < rank[py]) parent[px] = py;
        else if (rank[py] < rank[px]) parent[py] = px;
        else {
            parent[py] = px;
            rank[px]++;
        }
        return true;
    }
};

class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        vector<bool> ret(queries.size());
        vector<int> indices(queries.size());
        for (int i = 0; i < queries.size(); i++) indices[i] = i;
        sort(indices.begin(), indices.end(), [&](int i, int j) { return queries[i][2] < queries[j][2]; });
        sort(edgeList.begin(), edgeList.end(), [&](vector<int>& a, vector<int>& b) { return a[2] < b[2]; });
        UnionFind uf(n);
        int j = 0;
        for (int i : indices) {
            int p = queries[i][0], q = queries[i][1], limit = queries[i][2];
            while (j < edgeList.size() && edgeList[j][2] < limit) {
                uf.unite(edgeList[j][0], edgeList[j][1]);
                j++;
            }
            ret[i] = uf.find(p) == uf.find(q);
        }
        return ret;
    }
};
