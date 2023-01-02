class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        int up = 0, lo = 0, id = 0;
        for(int i = 0; i < len; i++) {
            if(isupper(word[i])) up += 1, id = i;
            if(islower(word[i])) lo += 1;
        }
        if(up == len || lo == len) return true;
        if(id == 0 && lo == len-1) return true;
        return false;
    }
};