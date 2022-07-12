class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> Mp;
        string temp;
        for(auto key: strs) {
            temp = key;
            sort(key.begin(), key.end());
            Mp[key].push_back(temp);
        }
        
        vector<vector<string>> ans;
        for(auto mp: Mp)
            ans.push_back(mp.second);
        
        return ans;
    }
};