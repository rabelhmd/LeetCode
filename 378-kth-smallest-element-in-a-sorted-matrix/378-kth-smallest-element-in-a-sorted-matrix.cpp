class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector <int> v;
        for(auto mat: matrix) for(auto e: mat) v.push_back(e);
        sort(v.begin(), v.end());
        return v[k-1];
    }
};