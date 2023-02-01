class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string cur;
        for(auto &w: words) {
            cur += w;
            if(cur == s) return true;
        }
        return false;
    }
};