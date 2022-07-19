class Solution {
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>> v(r);
        
        for(int i = 0; i < r; i++) {
            v[i].push_back(1);
            
            for(int j = 1; j < i; j++) {
                v[i].push_back(v[i-1][j-1] + v[i-1][j]);
            }
            
            if(i) v[i].push_back(1);
        }
        
        return v;
    }
};