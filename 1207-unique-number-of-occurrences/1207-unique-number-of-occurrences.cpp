class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> Mp;
        vector <int> fr;
        for(auto &x: arr) Mp[x] += 1;
        for(auto &x: Mp) {
            fr.push_back(x.second);
        }
        sort(fr.begin(), fr.end());
        for(int i = 0; i < fr.size()-1; i++) {
            if(fr[i] == fr[i+1]) return false;
        }
        return true;
    }
};