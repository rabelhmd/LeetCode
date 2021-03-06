class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        
        for(auto &c: s) {
            if(res.size() && res.back() == c) {
                res.pop_back();
                continue;
            }
            res += c;
        }
        
        return res;
    }
};