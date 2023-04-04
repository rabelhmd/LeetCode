class Solution {
public:
    int partitionString(string s) {
        unordered_set <char> St;
        int ret = 0, len = s.size();
        
        for(int i = 0; i < len; i++) {
            while(i < len and St.find(s[i]) == St.end()) {
                St.insert(s[i++]);
            }
            i -= 1, ret += 1;
            St.clear();
        }
        return ret;
    }
};