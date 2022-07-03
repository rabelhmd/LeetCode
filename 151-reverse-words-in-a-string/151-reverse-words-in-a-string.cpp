class Solution {
public:
    
    void getFilter(string &s) {
        while(s[0] == ' ') s.erase(0, 1);
        while(s[s.size()-1] == ' ') s.pop_back();
    }
    
    string getAns(vector <string> &v) {
        string str = "";
        for(int i = v.size()-1; i >= 0; i--) {
            str += v[i];
            str += (i > 0 ? " " : "");
        }
        return str;
    }
    
    string reverseWords(string s) {
        getFilter(s);
        stringstream ss(s);
        string w;
        vector <string> v;
        while(ss >> w) v.push_back(w);
        return getAns(v);
    }
};