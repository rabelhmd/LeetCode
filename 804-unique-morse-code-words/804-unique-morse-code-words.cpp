class Solution {
public:
    
    string strs[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> St;
        for(auto w: words) {
            string str;
            for(auto ch: w) {
                str += strs[ch - 'a'];
            }
            St.insert(str);
        }
        return St.size();
    }
};