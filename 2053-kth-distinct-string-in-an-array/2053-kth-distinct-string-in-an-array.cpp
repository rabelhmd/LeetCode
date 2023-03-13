class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string, int> Mp;
        for(auto &s: arr) Mp[s] += 1;
        
        string dp[arr.size()];
        int id = 0;
        for(auto &s: arr) {
            if(Mp[s] == 1) {
                dp[id++] = s;
            }
        }
        
        if(k <= id) {
            return dp[k-1];
        }
        return "";
    }
};