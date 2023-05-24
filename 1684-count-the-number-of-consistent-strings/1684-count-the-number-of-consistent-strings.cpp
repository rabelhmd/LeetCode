class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ret = 0;
        for(auto &word: words) {
            int flag = true;
            for(auto &c: word) {
                if(allowed.find(c) == string::npos) {
                    flag = false; break;
                }
            }
            if(flag) ret += 1;
        }
        return ret;
    }
};