// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector <string> v;
        unordered_map <string, int> Mp;
        int mx = -1;
        for(int i = 0; i < n; i++) {
            Mp[arr[i]] += 1;
            mx = max(mx, Mp[arr[i]]);
        }
        for(auto mp: Mp) {
            if(mp.second == mx) {
                v.push_back(mp.first);
            }
        }
        
        sort(v.begin(), v.end());
        
        return {v[0], to_string(mx)};
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends