class Solution {
public:
    string frequencySort(string s) {
        int len = s.size();
        unordered_map <char, int> Mp; 
        for(auto x: s) Mp[x] += 1;
        
        vector<string> bucket(len + 1, "");
        for(auto mp: Mp) bucket[mp.second].append(mp.second, mp.first);
        
        string res;
        for(int i = len; i > 0; i--) res += bucket[i];
        return res;
    }
};