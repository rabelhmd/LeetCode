class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ret = 0;
        unordered_map <char, bool> Mp;
        for(auto &j: jewels) Mp[j] = true;
        for(auto &s: stones) ret += (Mp.find(s) != Mp.end());
        return ret;
    }
};