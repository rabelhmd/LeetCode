class Solution {
public:
    int rec(int pos, int m, vector<int>& piles, vector<vector<int>>& dp) {
        if(pos >= piles.size()) return 0;
        
        int total = 0, ans = -100000;
        int &ret = dp[pos][m];
        if(~ret) return ret;
        
        for(int i = 0; i < 2*m; i++) {
            if(pos + i < piles.size()) total += piles[pos+i];
            ans = max(ans, total- rec(pos+i+1, max(m, i+1), piles, dp));
        }
        return ret = ans;
    }
    
    int stoneGameII(vector<int>& piles) {
        vector<vector<int>> dp(piles.size()+1, vector<int>(piles.size()+1,-1));
        int sum = 0;
        for(auto it: piles) sum += it;
        return (sum + rec(0, 1, piles, dp)) / 2;
    }
};