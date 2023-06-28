class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ret = 0;
        unordered_map <string, int> Mp;
        for(auto &w: words) {
            string str = w;
            reverse(w.begin(), w.end());
            if(Mp.find(str) == Mp.end()) Mp[w] += 1;
            else ret += 1;
        }
        return ret;
    }
};