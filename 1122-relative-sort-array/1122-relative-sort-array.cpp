class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int dp[10001];
        for(int i = 0; i <= 1000; i++) dp[i] = 0;
        for(auto &x: arr1) dp[x] += 1;
        
        int pos = 0;
        for(auto &x: arr2) {
            while(dp[x]-- > 0) arr1[pos++] = x;
        }
        
        for(int i = 0; i <= 1000; i++) {
            while(dp[i]-- > 0) arr1[pos++] = i;
        }
        return arr1;
    }
};
