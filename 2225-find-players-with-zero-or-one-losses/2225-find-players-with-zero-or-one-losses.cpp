class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> lost;
        for(auto m: matches) {
            if (!lost.count(m[0])) lost[m[0]] = 0;
            lost[m[1]]++;
        }
        vector <int> zero, one;
        for(auto [k, v]: lost) {
            if(v == 0) zero.push_back(k);
            if(v == 1) one.push_back(k);
        }
        return {zero, one};
    }
};