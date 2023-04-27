class Solution {
public:
    string greatestLetter(string s) {
        unordered_map <char, int> Mp;
        for(auto c: s) {
            Mp[c] = 1;
        }
        
        char mx = '0';
        for(auto c: s) {
            char ch = c;
            char up = toupper(ch), lo = tolower(ch);
            if(Mp[up] == 1 and Mp[lo] == 1) {
                if(up >= mx) {
                    mx = up; 
                }
            }
        }
        if(mx == '0') return "";
        string ret; ret += mx;
        return ret;
    }
};