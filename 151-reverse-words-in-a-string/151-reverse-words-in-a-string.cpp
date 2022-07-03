class Solution {
public:
    
    string getAns(vector <string> &v) {
        string str = "";
        for(int i = v.size()-1; i >= 0; i--) {
            str += v[i];
            str += (i > 0 ? " " : "");
        }
        return str;
    }
    
    string reverseWords(string s) {
        stringstream ss(s);
        vector <string> v;
        string w;
        while(ss >> w) v.push_back(w);
        return getAns(v);
    }
};