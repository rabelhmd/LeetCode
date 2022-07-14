// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <char> St;
        for(auto c: x) {
            if(c == '(' || c == '{' || c == '[') {
                St.push(c);
                continue;
            }
            if(St.empty()) return false;
            
            char top = St.top(); St.pop();
            if(top == '(' && c != ')') return false;
            if(top == '{' && c != '}') return false;
            if(top == '[' && c != ']') return false;
        }
        
        return St.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends