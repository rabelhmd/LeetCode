class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string, int> Mp;
        for(auto &x: arr) Mp[x] += 1;
        
        string dp[arr.size()];
        int id = 0;
        for(auto &x: arr) if(Mp[x] == 1) dp[id++] = x;
        if(id >= k) return dp[k-1];
        return "";
    }
};