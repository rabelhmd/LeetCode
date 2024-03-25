class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_map <string, int> Mp;
        for(int i = 0; i < s.size() - 1; i++) Mp[s.substr(i, 2)] += 1;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size() - 1; i++) if(Mp.find(s.substr(i, 2)) != Mp.end()) return true;
        return false;
    }
};