class Solution {
public:
    
    int Mp1[256], Mp2[256];
    
    bool canConstruct(string ransomNote, string magazine) {
        for(auto c: ransomNote) Mp1[c] += 1;
        for(auto c: magazine) Mp2[c] += 1;
        int len = ransomNote.size();
        for(int i = 0; i < len; i++)
            if(Mp1[ransomNote[i]] > Mp2[ransomNote[i]]) return false;
        return true;
    }
};