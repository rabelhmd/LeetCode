class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string, int> Mp1, Mp2;
        
        stringstream s(s1);
        string word;
        while (s >> word) Mp1[word] += 1;
        
        stringstream ss(s2);
        while (ss >> word) Mp2[word] += 1;
        
        vector<string> ret;
        for(auto &it: Mp1) {
            if(it.second == 1 and Mp2.find(it.first) == Mp2.end()) ret.push_back(it.first);
        }
        
        for(auto &it: Mp2) {
            if(it.second == 1 and Mp1.find(it.first) == Mp2.end()) ret.push_back(it.first);
        }
        
        return ret;
    }
};