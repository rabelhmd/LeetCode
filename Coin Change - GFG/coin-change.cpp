// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    long long int dp[1004][1004];

    long long int getNumberOfWays(int coins[], int len, int amount, int pos) {
        if(amount == 0) return 1;
        if(pos >= len) return 0;
    
        long long int &ret = dp[amount][pos];
        if(ret != -1) return ret;
    
        ret = 0;
        if(amount - coins[pos] >= 0) {
            ret += getNumberOfWays(coins, len, amount - coins[pos], pos);
        }
        ret += getNumberOfWays(coins, len, amount, pos+1);
        return ret;
    }

    long long int numberOfWays(int S[], int len, int amount) {
        memset(dp, -1, sizeof(dp));
        return getNumberOfWays(S, len, amount, 0);
    }
  
    long long int count(int S[], int n, int amount) {
        return numberOfWays(S, n, amount);
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