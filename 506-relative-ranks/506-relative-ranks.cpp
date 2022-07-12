class Solution {
public:
    
    string rank[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
    
    vector<string> findRelativeRanks(vector<int>& score) {
        int len = score.size();
        vector <int> t = score;
        sort(t.rbegin(), t.rend());
        
        unordered_map<int, string> Mp;
        for(int i = 0; i < min(3, len); i++) Mp[t[i]] = rank[i];
        for(int i = 3; i < len; i++) Mp[t[i]] = to_string(i+1);
        
        vector<string> res;
        for(auto c: score) res.push_back(Mp[c]);
        
        return res;
    }
};