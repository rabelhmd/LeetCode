class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool isValid(string str) {
        stack <char> stc;
        for(auto c: str) {
            if(c == '(') stc.push(c);
            else {
                if(stc.empty()) {
                    return false;
                }
                stc.pop();
            }
        }
        return true;
    }
    
    string makeStr(int n, char ch) {
        faster();
        string str;
        for(int i = 0; i < n; i++) str += ch;
        return str;
    }
    
    vector<string> generateParenthesis(int n) {
        vector <string> v;
        
        string str = makeStr(n, '(') + makeStr(n, ')');
        
        do {
            if(isValid(str)) v.push_back(str);
        }while(next_permutation(str.begin(), str.end()));
        
        return v;
    }
};