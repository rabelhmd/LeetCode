// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) {
        int mx = -1, len = S.size();
        
        for(int i = 0; i < len; i++) {
            string str;
            while(i < len && isdigit(S[i])) {
                str += S[i++];
            }
            if(str != "") {
                mx = max(mx, stoi(str));
            }
        }
        
        return mx;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
}   // } Driver Code Ends