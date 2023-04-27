class Solution {
public:
    unordered_map <string, char> Mp;
    void doMap() {
        for(int i = 1, a = 'a'; i <= 9; i++) {
            Mp[to_string(i)] = a++;
        }
        
        for(int i = 10, a = 'j'; i <= 26; i++) {
            Mp[to_string(i) + "#"] = a++;
        }
    }
    
    string freqAlphabets(string s) {
        doMap();
        string ret;
        for(int i = 0; i < s.size(); i++) {
            if (i < s.size() - 2 && s[i + 2] == '#') {
                string str = s.substr(i, 3); i += 2;
                ret += Mp[str];
            } else {
                ret += Mp[to_string(s[i] - '0')];
            }
        }
        return ret;
    }
};