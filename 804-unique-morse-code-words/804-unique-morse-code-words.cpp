class Solution {
public:
    
    string strs[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> Mp;
        int id = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) Mp[ch] = strs[id++];
        
        set<string> St;
        for(auto w: words) {
            string str;
            for(auto ch: w) {
                str += Mp[ch];
            }
            St.insert(str);
        }
        return St.size();
    }
};