class Solution {
public:
    
    string rec(string &s, int &i) {
        string res;
        int len = s.size();
        while(i < len && s[i] != ']') {
            if(!isdigit(s[i])) {
                res += s[i++];
                continue;
            }
            
            string str = "";
            while(i < len && isdigit(s[i])) str += s[i++];
            i += 1; // '['
            string cur = rec(s, i);
            i += 1; // ']'
            int n = stoi(str);
            while(n-->0) res += cur;
        }
        return res;
    }
    
    string decodeString(string s) {
        int i = 0;
        return rec(s, i);
    }
};