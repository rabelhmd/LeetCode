class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
    std::sort(words.begin(), words.end(), [](const std::string& first, const std::string& second) {
        return first.size() < second.size();
    });
        
        unordered_map<string, int> Mp;
        int ret = 0;
        for(string& word: words) {
            int longest = 0;
            for(int i = 0; i < word.length();i++) {
                string sub = word.substr(0,i) + word.substr(i+1,word.length()+1);
                longest = max(longest, Mp[sub]+1);   
            }
            Mp[word] = longest;
            ret = max(ret, longest);
        }
        return ret;
    }
};