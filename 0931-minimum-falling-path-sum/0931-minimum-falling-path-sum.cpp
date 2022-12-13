class Solution {
public:
    int len;
    
    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int row, int col){
        if(row == len) return 0;
        else if(col < 0 || col == len) return 10000000;
        int &ret = dp[row][col];
        if(~ret) return ret;
        
        int cur = matrix[row][col];
        int ans1 = dfs(matrix, dp, row+1, col-1) + cur;
        int ans2 = dfs(matrix, dp, row+1, col) + cur;
        int ans3 = dfs(matrix, dp, row+1, col+1) + cur;
        return ret = min({ans1, ans2, ans3});
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        len = matrix.size();
        
        vector<vector<int>> dp(len, vector<int>(matrix[0].size(), -1));
        int mini = INT_MAX;
        for(int i=0; i<matrix[0].size(); i++){
            mini = min(mini, dfs(matrix, dp, 0, i));
        }
        return mini;
    }
};