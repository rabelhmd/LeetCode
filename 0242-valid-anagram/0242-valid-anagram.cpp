class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> ss, tt;
        for(auto &x: s) ss[x] += 1;
        for(auto &x: t) tt[x] += 1;
        return ss == tt;
    }
};