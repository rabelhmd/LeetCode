class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++) {
            vector <int> v;
            int x = i, y = 0;
            while(x < n && y < m) {
                v.push_back(mat[x][y]);
                y += 1;
                x += 1;
            }
            sort(v.begin(), v.end());
            
            x = i, y = 0;
            while(x < n && y < m) {
                mat[x][y] = v[y];
                y += 1;
                x += 1;
            }
        }
        
        for(int i = 0; i < m; i++) {
            vector <int> v;
            int x = 0, y = i;
            while(x < n && y < m) {
                v.push_back(mat[x][y]);
                y += 1;
                x += 1;
            }
            sort(v.begin(), v.end());
            x = 0, y = i;
            while(x < n && y < m) {
                mat[x][y] = v[x];
                y += 1;
                x += 1;
            }
        }
        
        return mat;
    }
};