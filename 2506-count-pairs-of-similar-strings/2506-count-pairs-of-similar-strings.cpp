class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map <string, int> Mp;
        for(auto &x: words) {
            unordered_set<char> St(x.begin(), x.end());
            string str(St.begin(), St.end());
            sort(str.begin(), str.end());
            Mp[str] += 1;
        }
        
        int ret = 0;
        for (auto& it: Mp) {
            int p = it.second;
            ret += (p * (p-1))/2;
        }
        return ret;
    }
};