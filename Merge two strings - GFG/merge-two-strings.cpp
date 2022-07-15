// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



string merge (string S1, string S2) {
    string str;
    
    int len1 = S1.size(), l1 = 0;
    int len2 = S2.size(), l2 = 0;
    
    while(l1 < len1 && l2 < len2) {
        str += S1[l1++];
        str += S2[l2++];
    }
    
    while(l1 < len1) {
        str += S1[l1++];
    }
    
    while(l2 < len2) {
        str += S2[l2++];
    }
    
    return str;
}