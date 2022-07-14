// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S) {
        string res;
        res = S[0];
        int len = S.size();
        for(int i = 1; i < len; i++) {
            if(S[i] != S[i-1]) res += S[i];
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends