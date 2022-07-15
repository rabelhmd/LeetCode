// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        int id = 0;
        int len = s.size();
        string res;
        
        for(int i = 0; i < len; i++) {
            string str, sub;
            while(i < len) {
                if(s[i] == '.') {
                    break;
                }
                str += s[i++];
            }
            
           // cout << "bbb " << str << endl;
            
            id = 0;
            while(id < str.size()) {
                if(str[id] != '0') break;
                id += 1;
            }
            
            while(id < str.size()) sub += str[id++];
            if(sub == "") sub = "0";
            res += sub;
            res += ".";
        }
        
        if(res != "") res.pop_back();
        
        return res;
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
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends