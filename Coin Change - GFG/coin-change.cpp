// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    long long int dp[1005][1005];
  
    long long coinChange(int S[], int len, int amount, int pos) {
        if(amount == 0) return 1;
        if(pos >= len) return 0;
        
        long long &ret = dp[amount][pos];
        if(ret != -1) return ret;
        
        ret = 0;
        if(amount - S[pos] >= 0) {
            ret += coinChange(S, len, amount - S[pos], pos);
        }
        ret += coinChange(S, len, amount, pos+1);
        return ret;
    }
  
    long long int count(int S[], int n, int amount) {
        memset(dp, -1, sizeof(dp));
        return coinChange(S, n, amount, 0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends