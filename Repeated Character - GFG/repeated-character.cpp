// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s) {
        unordered_map<char, int> Mp;
        for(auto c: s) {
            Mp[c] += 1;
        }
        
        for(auto c: s) {
            if(Mp[c] > 1) return c;
        }
        return '#';
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends