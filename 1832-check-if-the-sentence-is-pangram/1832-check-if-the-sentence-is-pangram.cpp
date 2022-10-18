class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map <char, bool> Mp;
        for(auto &c: sentence) Mp[c] = true;
        for(char c = 'a'; c <= 'z'; c++)
            if(!Mp[c]) return false;
        return true;
    }
};