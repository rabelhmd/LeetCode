class Solution {
public:
    bool buddyStrings(string s, string g) {
        int lens = s.size(), leng = g.size();
        if(lens != leng) return false;
        vector <int> dif;
        set <char> St;
        for(int i = 0; i < lens; i++) {
            if(s[i] != g[i]) dif.push_back(i);
            St.insert(s[i]);
        }
        if(s == g and St.size() < lens) return true;
        return dif.size() == 2 and s[dif[0]] == g[dif[1]] and s[dif[1]] == g[dif[0]];
    }
};