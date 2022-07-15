// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int count = 0;
    	for(auto c: s) {
    	    count += isupper(c) ? 1 : 0;
    	}
    	
    	return count;
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
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends