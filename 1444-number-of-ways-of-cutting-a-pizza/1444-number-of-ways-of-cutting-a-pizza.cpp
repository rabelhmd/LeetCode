#define LL long long
const int mod = 1e9+7;

class Solution {
public:
    int solve(vector<vector<int>> &vc , int ci , int cj ,  int cuts , vector<vector<vector<int>>> &dp){
        if(!cuts) {
            if(vc[ci][cj] > 0) return 1;
            return 0;
        }
        
        int& ret = dp[ci][cj][cuts];
        if(~ret) return ret;
        LL rows = 0, cols = 0;
        
        for(int i = ci+1; i < vc.size()-1; i++) {
            if(vc[i][cj] >= cuts && vc[ci][cj] - vc[i][cj] > 0) {
                rows = (rows + solve(vc, i, cj, cuts-1, dp))%mod;
            } 
        }
        
        for(int j = cj+1; j < vc[0].size()-1; j++) {
            if(vc[ci][j] >= cuts && vc[ci][cj] - vc[ci][j] > 0) {
                cols = (cols + solve(vc, ci, j, cuts-1, dp))%mod;
            }
        }
        return ret = (rows + cols)%mod;
    }

    int ways(vector<string>& pizza, int cuts) {
        int n = pizza.size();
        int m = pizza[0].size();
        
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (m+1, vector<int>(cuts+1,-1)));
        vector<vector<int>> apple(n+1,vector<int> (m+1,0));
        
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1 ; j >= 0; j--) {
                apple[i][j] = apple[i+1][j] + apple[i][j+1] - apple[i+1][j+1] + int(pizza[i][j]=='A');
            }
        }
        return solve(apple, 0, 0, cuts-1, dp);
    }
};