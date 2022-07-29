class Solution {
public:
    
    string getPattern(string w) {
        unordered_map <int, int> Mp;
        char ch = 'a';
        for(auto c: w) {
            if(Mp.find(c) != Mp.end()) continue;
            Mp[c] = ch++;
        }
        string p;
        for(auto &c: w) p += Mp[c];
        return p;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        pattern = getPattern(pattern);
        //cout << pattern << endl;
        vector <string> res;
        for(auto& w: words) {
            //cout << getPattern(w) << endl;
            if(pattern == getPattern(w)) {
                res.push_back(w);
            }
        }
        return res;
    }
};