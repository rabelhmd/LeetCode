class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char, char> Mp1;
        map <string, char> Mp2;
        istringstream ss(s);
        string w; int id = 0; char hash = 'a';
        while(ss >> w) {
            char ch = pattern[id++];
            if(Mp1[ch] != Mp2[w]) return false;
            Mp1[ch] = hash;
            Mp2[w] = hash++;
        }
        return id == pattern.size();
    }
};