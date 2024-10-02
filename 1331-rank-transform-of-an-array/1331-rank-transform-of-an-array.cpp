class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> St;
        for(auto &x: arr) St.insert(x);
        unordered_map <int, int> Mp;
        int rank = 0;
        for(auto &s: St) Mp[s] = ++rank;
        vector<int> ret;
        for(auto &x: arr) ret.push_back(Mp[x]);
        return ret;
    }
};