class Solution {
public:
    vector <int> freq(string str) {
        vector <int> Mp(26, 0);
        for(auto &x: str) Mp[x - 'a'] += 1;
        return Mp;
    }
    
    bool check(vector <int> f, vector <int>& ch) {
        for(int i = 0; i < 26; i++) if(f[i] > ch[i]) return false;
        return true;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        vector <int> ch = freq(chars);
        int ret = 0;
        for(auto &w: words) {
            if(check(freq(w), ch)) ret += w.size();
        }
        return ret;
    }
};