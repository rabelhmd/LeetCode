class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char, int> sMp, tMp;
        for(auto &x: s) sMp[x] += 1;
        for(auto &x: t) tMp[x] += 1;
        int ret = 0;
        for(char x = 'a'; x <= 'z'; x++) {
            ret += max(sMp[x] - tMp[x], tMp[x] - sMp[x]);
        }
        return ret / 2;
    }
};