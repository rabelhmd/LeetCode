class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>>ans(rows);
    
        for(int i=0;i<rows;i++){
            ans[i].push_back(1);
            for(int j=1;j<i;j++){
                ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);    
            }
            if(i)
                ans[i].push_back(1);
        }
        return ans;
    }
};