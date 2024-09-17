class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string, int> Mp;
        
        stringstream s(s1 + " " + s2);
        string w;
        while (s >> w) Mp[w] += 1;
        vector<string> ret;
        for(auto &it: Mp) if(it.second == 1) ret.push_back(it.first);
        return ret;
    }
};