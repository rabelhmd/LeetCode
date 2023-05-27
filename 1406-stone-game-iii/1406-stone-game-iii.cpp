class Solution {
public:
    int dp[50001] = {[0 ... 50000] = INT_MIN};
    int dfs(vector<int>& sv, int p) {
        if (p >= sv.size()) return 0;
        
        int &ret = dp[p];
        if(ret != INT_MIN) return ret;
        for (int i = 0, sum = 0; i < 3 && p + i < sv.size(); i++) {
            sum += sv[p + i];
            ret = max(ret, sum - dfs(sv, p + i + 1));
        }
        return ret;
    }
    
    string stoneGameIII(vector<int>& sv) {
        int ret = dfs(sv, 0);
        return ret == 0 ? "Tie" : ret < 0 ? "Bob" : "Alice";
    }
};