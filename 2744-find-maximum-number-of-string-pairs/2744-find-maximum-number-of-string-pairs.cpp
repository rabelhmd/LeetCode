class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ret = 0;
        unordered_set <string> St;
        for(auto &w: words) {
            string str = w;
            reverse(w.begin(), w.end());
            if(St.find(str) == St.end()) St.insert(w);
            else ret += 1;
        }
        return ret;
    }
};