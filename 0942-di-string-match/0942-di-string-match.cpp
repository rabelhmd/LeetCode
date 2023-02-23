class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ret;
        int len = s.size(), count = 0, mx = len;
        for(auto &c: s) {
            if(c == 'I') {
                ret.push_back(count++);
                continue;
            }
            ret.push_back(mx--);
        }
        s[len-1] == 'I' ? ret.push_back(count) : ret.push_back(mx);
        return ret;
    }
};