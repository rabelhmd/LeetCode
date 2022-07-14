// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n) {
            unordered_map<string, int> Mp;
            for(int i = 0; i < n; i++) {
                Mp[list[i]] += 1;
            }
            
            int sum = 0;
            for(auto mp: Mp) {
                if(mp.second == 2) sum += 1;
            }
            return sum;
        }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends