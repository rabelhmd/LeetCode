// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n) {
        unordered_map<string, int> Mp;
        for(int i = 0; i < n; i++) {
            Mp[arr[i]] += 1;
        }
        
        vector <int> v;
        for(auto mp: Mp) {
            v.push_back(mp.second);
        }
        
        sort(v.rbegin(), v.rend());
        for(auto mp: Mp) {
            if(v[1] == mp.second) {
                return mp.first;
            }
        }
        
        return "";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends