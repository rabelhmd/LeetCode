// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s) {
    string res = "-1";
    unordered_map<char, int> Mp;
    for(auto c: s) {
        if(Mp.find(c) != Mp.end()) {
            res = "";
            res += c;
            return res;
        }
        
        Mp[c] += 1;
    }
     
    return res;
}