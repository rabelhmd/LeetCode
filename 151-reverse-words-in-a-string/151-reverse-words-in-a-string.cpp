class Solution {
public:
    
    void getFilter(string &s) {
        while(s[0] == ' ') s.erase(0, 1);
        while(s[s.size()-1] == ' ') s.pop_back();
    }
    
    string reverseWords(string s) {
        getFilter(s);
        stringstream ss(s);
        string w;
        vector <string> v;
        while(ss >> w) {
            v.push_back(w);
        }
        w = "";
        for(int i = v.size()-1; i >= 0; i--) w += v[i] + " ";
        if(!w.empty()) w.pop_back();
        return w;
    }
};