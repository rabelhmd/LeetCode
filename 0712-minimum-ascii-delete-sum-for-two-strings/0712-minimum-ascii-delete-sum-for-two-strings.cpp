class Solution {
public:
    
    int rec(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i == s1.length() || j == s2.length()) return 0;
        int &ret = dp[i][j]; if(~ret) return ret;
        int res = 0;
        if(s1[i] == s2[j]) res = s1[i] + rec(s1, s2, i+1, j+1, dp); 
        else res = max(rec(s1, s2, i+1, j, dp), rec(s1, s2, i, j+1, dp));
        return ret = res;
    }
    
	int minimumDeleteSum(string s1, string s2) {
        int n = s1.length(), m = s2.length(), sum = 0;
        vector <vector<int>> dp(n+1, vector<int>(m+1, -1));
        for(int i=0;i<n;i++) sum += s1[i];
        for(int i=0;i<m;i++) sum += s2[i];
        return sum - (2 * (rec(s1,s2, 0, 0, dp)));
    }
};