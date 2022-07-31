class Solution {
public:
    
    int dp[101][21][101];
    
    int helper(int i,int l,int t,vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        if(i == m) {
            if(t == target) return 0;
            return INT_MAX/2;
        }
        
        if(t > target) return INT_MAX/2;
        int &ret = dp[i][l][t];
        if(~ret) return ret;
        
        int ans = INT_MAX/2;
        if(houses[i] == 0) {
            for(int col=0;col<n;col++) {
                ans=min(ans, cost[i][col] + helper(i+1,col+1,(col+1==l)?t:t+1,houses,cost,m,n,target));
            }
        }
        else ans = helper(i+1,houses[i],(houses[i]==l)?t:t+1,houses,cost,m,n,target);
        return ret = ans;
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof dp);
        int ans=helper(0,0,0,houses,cost,m,n,target);
        return (ans==INT_MAX/2? -1 :ans); 
    }
};