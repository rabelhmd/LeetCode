class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector <int> v;
        for(auto &mat: matrix) {
            v.insert(v.end(), mat.begin(), mat.end());
        }
        sort(v.begin(), v.end());
        return v[k-1];
    }
};