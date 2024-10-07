class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    int minLength(string s) {
        faster();
        string ret;
        for(auto &c: s) {
            ret += c;
            int len = ret.size();
            if(len >= 2) {
                string sub = ret.substr(len-2, 2);
                if(sub == "AB" or sub == "CD") ret.pop_back(), ret.pop_back();
            }
        }
        return ret.size();
    }
};