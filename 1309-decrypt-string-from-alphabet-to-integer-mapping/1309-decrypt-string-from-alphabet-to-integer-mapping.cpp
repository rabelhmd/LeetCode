class Solution {
public:
    unordered_map <string, char> Mp;
    void doMap() {
        for(int i = 1, a = 'a'; i <= 26; i++, a++) {
            Mp[to_string(i)] = a;
        }
    }
    
    string freqAlphabets(string s) {
        doMap();
        string ret;
        for(int i = 0; i < s.size(); i++) {
            if (i < s.size() - 2 && s[i + 2] == '#') {
                ret += Mp[s.substr(i, 2)];
                i += 2;
            } else {
                ret += Mp[to_string(s[i] - '0')];
            }
        }
        return ret;
    }
};