class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector <int> ret;
        for(long long i = 0, mod = 0; i < word.size(); i++) {
            mod = (mod * 10 + word[i] - '0') % m;
            ret.push_back(mod == 0);
        }
        return ret;
    }
};