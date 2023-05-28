class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    int dp[105][105];
    int rec(int s, int e, vector<int>& cuts) {
        if(e - s == 1) return 0;
        int &ret = dp[s][e];
        if(~ret) return ret;
        ret = INT_MAX;
        for(int i = s + 1; i < e; i++) {
            ret = min(ret, rec(s, i, cuts) + rec(i, e, cuts) + cuts[e] - cuts[s]);
        }
        return ret;
    }
    
    int minCost(int n, vector<int>& cuts) {
        faster();
        memset(dp, -1, sizeof(dp));
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        return rec(0, cuts.size()-1, cuts);
    }
};