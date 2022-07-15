// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N) {
	    int n = N.size();
	    int l = 0, r = 0;
	    for(int i = 0, j = n-1; i < (n/2); i++, j--) {
	        l += N[i] - '0';
	        r += N[j] - '0';
	    }
	    
	    return l == r;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends