class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> Mp;
        for(auto &w: words) Mp[w] += 1;
        
        int sLen = s.size(), n = words.size(), len = words[0].size();
        int total = sLen - n * len + 1;
        vector <int> res;
        
        for(int i = 0; i < total; i++) {
            unordered_map<string, int> check;
            int pos = 0;
            while(pos < n) {
                string w = s.substr(i + pos * len, len);
                if(Mp.find(w) == Mp.end()) {
                    break;
                }
                check[w] += 1;
                if (check[w] > Mp[w]) {
                    break;
                }
                pos += 1;
            }
            
            if(pos == n) {
                res.push_back(i);
            }
        }
        return res;
    }
};
