class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> Mp1, Mp2;
        for(auto x: s) Mp1[x] += 1;
        for(auto x: t) Mp2[x] += 1;
        return Mp1 == Mp2;
    }
};