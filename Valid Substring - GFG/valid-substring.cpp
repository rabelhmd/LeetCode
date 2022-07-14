// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        stack<int> St;
        St.push(-1);
        
        int len = s.size(), mx = 0;
        for(int i = 0; i < len; i++) {
            if(s[i] == '(') {
                St.push(i);
                continue;
            }
            
            St.pop();
            
            if(!St.empty()) {
                mx = max(mx, i - St.top());
            } else {
                St.push(i);
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends