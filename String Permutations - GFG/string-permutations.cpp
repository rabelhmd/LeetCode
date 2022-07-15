// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        vector <string> v;
        
        sort(S.begin(), S.end());
        
        do {
            v.push_back(S);
        }
        while(next_permutation(S.begin(), S.end()));
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends