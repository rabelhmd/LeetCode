class Solution {
public:
    static bool compare(string &a, string &b) {
        return a.size() < b.size();
    }
    
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        vector<string> ret;
        int len = words.size();
        for(int i = 0; i < len; i++) {
            string &str = words[i];
            for(int j = i + 1; j < len; j++) {
                if(words[j].find(str) != string::npos) {
                    ret.push_back(str); break;
                }
            }
        }
        return ret;
    }
};