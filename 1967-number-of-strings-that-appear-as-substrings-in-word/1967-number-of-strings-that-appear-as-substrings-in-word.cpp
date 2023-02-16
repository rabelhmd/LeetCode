class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ret = 0;
        for(auto &p: patterns) {
            ret += word.find(p) != string::npos;
        }
        return ret;
    }
};