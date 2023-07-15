class Solution {
public:
    int rec(int i, int k, vector<vector<int>>& eve, vector<int>& st, int n, vector<vector<int>>& dp) {
		if(i == n || k == 0) return 0;
		if(dp[i][k] != -1) return dp[i][k];
		int ind = upper_bound(st.begin(),st.end(), eve[i][1]) - st.begin();
		int pick = eve[i][2] + rec(ind,k-1, eve, st, n, dp);
		int notpick = rec(i+1, k, eve, st, n, dp);
		return dp[i][k] = max(pick, notpick);
	}

	int maxValue(vector<vector<int>>& eve, int k) {
		int n = eve.size();
		sort(eve.begin(), eve.end());
		vector<int> st;
		vector<vector<int>> dp(n,vector<int>(k+1,-1));
		for(auto i: eve) st.push_back(i[0]);
		return rec(0,k,eve,st,n,dp);
	}
};	