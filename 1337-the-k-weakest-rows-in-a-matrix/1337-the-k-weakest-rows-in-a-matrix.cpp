class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int len = mat.size(), count = 0;
        vector<pair <int, int>> V;
        
        for(int i = 0; i < len; i++) {
            count = 0;
            for(auto& x: mat[i]) count += (x == 1);
            V.push_back({count, i});
        }
        sort(V.begin(), V.end());
        
        vector <int> ret;
        for(auto pr: V) {
            ret.push_back(pr.second);
            k--;
            if(k <= 0) return ret;
        }
        return ret;   
    }
};