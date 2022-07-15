// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len) {
    char str[len];
    for(int i = 0; i < len; i++) {
        str[i] = S[i];
    }
    for(int i = len-1, j = 0; i >= 0; i--) {
        S[j++] = str[i]; 
    }
    return S;
}