class Solution {
public:
    string reverseWords(string s) {
        string w, ret;
        stringstream ss(s);
        while(ss >> w) {
            reverse(w.begin(), w.end());
            ret += w;
            ret += " ";
        }
        if(ret != "") ret.pop_back();
        return ret;
    }
};