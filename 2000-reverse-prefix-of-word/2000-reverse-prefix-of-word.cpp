class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t f = word.find(ch);
        if(f == string::npos) return word;
        string w;
        for(int i = f; i >= 0; i--) w += word[i];
        for(int i = f + 1; i < word.size(); i++) w += word[i];
        return w;
    }
};
