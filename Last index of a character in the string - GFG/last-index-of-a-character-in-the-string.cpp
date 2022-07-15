// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int LastIndex(string s, char p){
        int len = s.size();
        int pos = -1;
        for(int i = len-1; i >= 0; i--) {
            if(s[i] == p) {
                pos = i;
                break;
            }
        }
        
        if(pos == -1) return pos;
        
        return pos;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}

  // } Driver Code Ends