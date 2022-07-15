// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s) {
            vector <int> v(4, 0);
            
            for(auto c: s) {
                if(isupper(c)) v[0] += 1;
                else if(islower(c)) v[1] += 1;
                else if(isdigit(c)) v[2] += 1;
                else v[3] += 1;
            }
            
            return v;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends