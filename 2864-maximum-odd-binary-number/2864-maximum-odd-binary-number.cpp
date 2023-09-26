class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int id = 0, len = s.size();
        for(int i = 0; i < len-1; i += 1) if(s[i] == '1') swap(s[i], s[id++]);
        if(s.back() != '1') swap(s[len - 1], s[id - 1]);
        return s;
    }
};