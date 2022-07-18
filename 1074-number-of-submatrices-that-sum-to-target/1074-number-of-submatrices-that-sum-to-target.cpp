class Solution {
public:
    
    void prefixSum(vector<vector<int>>& grid, int& r, int& c) {
        for(int i = 0; i < r; i++)
            for(int j = 1; j < c; j++) 
                grid[i][j] += grid[i][j -1];
    }
    
    int solve(vector<vector<int>>& matrix, int target, int& row, int& col) {
        unordered_map<int , int> Mp;
        int count = 0, sum = 0, cur = 0;
        for(int k = 0 ; k < col; k++) {
            for(int j = k; j < col; j++) {
                Mp.clear();
                Mp[0] = 1;
                sum = 0;
                for(int i = 0; i < row; i++) {
                    sum += matrix[i][j];
                    if(k) sum -= matrix[i][k - 1];
                    cur = sum - target;
                    if(Mp.find(cur) != Mp.end()) count += Mp[cur];
                    Mp[sum]++;
                }
            }
        }
        return count;
    }
    
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() , col = matrix[0].size();
        if(row < 1) return 0;
        
        prefixSum(matrix, row, col); // calculate prefix sum for rows
        return solve(matrix, target, row, col);
    }
};