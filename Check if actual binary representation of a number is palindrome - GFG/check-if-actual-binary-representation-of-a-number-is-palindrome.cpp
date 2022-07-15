// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int binaryPalin (long long int N)
	{
	    string str;
	    while(N) {
	        str += (N % 2) + '0';
	        N /= 2;
	    }
	    
	    string t = str;
	    reverse(str.begin(), str.end());
	    return t==str;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends