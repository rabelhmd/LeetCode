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
        
        reverse(v.begin(), v.end());
        len = v.size();
        string str;
        for(int i = 0; i < len; i++) {
            str += v[i];
            if(i < len-1) {
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