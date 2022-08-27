class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int mx = INT_MIN, m = matrix.size(), n = matrix[0].size();
        int subarr[m];
        
        for(int l = 0; l < n; l++) {
            memset(subarr, 0, sizeof(subarr));
            for(int r = l; r < n; r++) {
                
                for(int i = 0; i < m; i++) {
                    subarr[i] += matrix[i][r];
                }
                for(int i = 0; i < m; i++) {
                    int sum = 0;
                    for(int j = i; j < m; j++) {
                        sum += subarr[j];
                        if(sum > k) continue;
                        if(sum > mx) mx = sum;
                    }
                }
            }
        }
        
        return mx;
    }
};