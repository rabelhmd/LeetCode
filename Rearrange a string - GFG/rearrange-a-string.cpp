// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str) {
        string res;
        int sum = 0, f = 0;
        for(auto c: str) {
            if(isdigit(c)) sum += c - '0', f = 1;
            else res += c;
        }
        
        sort(res.begin(), res.end());
        res += f == 0 ? "" : to_string(sum);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends