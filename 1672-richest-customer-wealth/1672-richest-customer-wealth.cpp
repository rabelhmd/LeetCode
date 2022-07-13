class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = -1;
        for(auto account: accounts)
            mx = max(mx, accumulate(account.begin(), account.end(), 0));
        return mx;
    }
};