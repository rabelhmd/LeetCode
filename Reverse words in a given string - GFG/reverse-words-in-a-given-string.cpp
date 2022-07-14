// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector <string> v;
        int id = 0, len = S.size();
        while(id < len) {
            string str;
            while(id < len && S[id] != '.') {
                str += S[id++];
            }
            while(id < len && S[id] == '.') {
                id += 1;
            }
            if(str != "") v.push_back(str);
        }
        
        len = v.size();
        string str;
        for(int i = len-1; i >= 0; i--) {
            str += v[i];
            if(i > 0) {
                str += '.';
            }
        }
        return str;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends