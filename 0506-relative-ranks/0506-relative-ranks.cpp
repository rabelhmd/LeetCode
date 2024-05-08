class Solution {
public:
    

    vector<string> findRelativeRanks(vector<int>& score) {
        vector <int> t = score;
        sort(t.rbegin(), t.rend());
        
        unordered_map <int, string> Mp;
        Mp[t[0]] = "Gold Medal";
        if(t.size() >= 2) Mp[t[1]] = "Silver Medal";
        if(t.size() >= 3) Mp[t[2]] = "Bronze Medal";
        
        for(int i = 3; i < t.size(); i++) Mp[t[i]] = to_string(i+1);
        
        vector <string> ret;
        for(auto &x: score) ret.push_back(Mp[x]);
        return ret;
    }
};