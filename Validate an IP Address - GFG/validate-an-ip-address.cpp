// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            
            int id = 0, len = s.size();
            
            if(s[0] == '.') return false;
            
            for(int i = 1; i < len; i++) {
                if(s[i] == '.' && s[i-1] == '.') return false;
                if(s[i] == '.') id += 1;
            }
            
            if(id != 3) return false;
            
            string a, b, c, d;
            id = 0;
            
            while(id < len && s[id] != '.') {
                if(isdigit(s[id]) == false) return false;
                a += s[id++];
            }
            id += 1;
            while(id < len && s[id] != '.') {
                if(isdigit(s[id]) == false) return false;
                b += s[id++];
            }
            id += 1;
            while(id < len && s[id] != '.') {
                if(isdigit(s[id]) == false) return false;
                c += s[id++];
            }
            id += 1;
            while(id < len && s[id] != '.') {
                if(isdigit(s[id]) == false) return false;
                d += s[id++];
            }
            id += 1;
            
            if(a == "" || b == "" || c == "" || d == "") return 0;
            
            
            if(a.size() > 1 && a[0] =='0' || b.size() > 1 && b[0] =='0' || c.size() > 1 && c[0] =='0' || d.size() > 1 && d[0] =='0') return 0;
            
            int A = stoi(a);
            if(A < 0 || A > 255) return false;
            int B = stoi(b);
            if(B < 0 || B > 255) return false;
            int C = stoi(c);
            if(C < 0 || C > 255) return false;
            int D = stoi(d);
            if(D < 0 || D > 255) return false;
            
            return true;
            
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends