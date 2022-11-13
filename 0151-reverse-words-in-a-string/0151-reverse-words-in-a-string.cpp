class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w, ret;
        vector <string> v;
        while(ss >> w) v.push_back(w);
        for(int i = (int)v.size()-1; i >= 0; i--) {
            ret += v[i];
            if(i > 0) ret += " ";
        }
        return ret;
    }
};