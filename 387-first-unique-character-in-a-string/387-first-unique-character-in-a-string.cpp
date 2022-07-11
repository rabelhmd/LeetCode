class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> Mp;
        for(auto c: s) Mp[c] += 1;
        
        int len = s.size();
        for(int i = 0; i < len; i++)
            if(Mp[s[i]] == 1) return i;
        return -1;
    }
};