// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str) {
        unordered_map<char, int> Mp;
        string res;
        int mx = -1;
        for(auto c: str) {
            Mp[c] += 1;
            mx = max(mx, Mp[c]);
        }
        
        for(auto mp: Mp) {
            if(mp.second == mx) {
                res += mp.first;
            }
        }
        
        sort(res.begin(), res.end());
        
        return res[0];
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends