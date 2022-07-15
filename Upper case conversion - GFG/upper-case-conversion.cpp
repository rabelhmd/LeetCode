// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}// } Driver Code Ends



string transform(string s) {
    stringstream ss(s);
    string w, str;
    
    while(ss >> w) {
        w[0] = toupper(w[0]);
        str += w;
        str += " ";
    }
    
    if(str != "") str.pop_back();
    
    return str;
}