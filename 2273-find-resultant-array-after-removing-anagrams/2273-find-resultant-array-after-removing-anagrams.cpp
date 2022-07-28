class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 1; i < words.size(); i++) {
            unordered_map <char, int> mp1, mp2;
            for(auto x: words[i]) mp1[x] += 1;
            for(auto x: words[i-1]) mp2[x] += 1;
            if(mp1 == mp2) {
                words.erase(words.begin() + i);
                i -= 1;
            }
        }
        return words;
    }
};