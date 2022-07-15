// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long ExtractNumber(string S) {
        stringstream ss(S);
        
        string w;
        long long mx = -1;
        while(ss >> w) {
            string str, d;
            for(auto c: w) {
                if(isdigit(c)) d += c;
            }
            if(d == "") continue;
            
            str = d;
            
            
            for(auto c: d) {
                if(c == '9') {
                    str = "";
                    break;
                }
            }
            
            if(str != "") {
                mx = max(mx, stoll(str));
            }
        }
        
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends