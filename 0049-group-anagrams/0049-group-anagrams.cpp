class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> Mp;
        for(auto &key: strs) {
            string str = key;
            sort(key.begin(), key.end());
            Mp[key].push_back(str);
        }
        vector<vector<string>> ret;
        for(auto &it: Mp) {
            ret.push_back(it.second);
        }
        return ret;
    }
};