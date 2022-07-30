class Solution {
public:
    
    vector <int> maxFreq(vector<string>& V) {
        vector <int> Mp(26, 0);
        for(auto& word: V) {
            int temp[26] = {0};
            for(auto& ch: word) temp[ch - 'a'] += 1;
            for(int i = 0; i < 26; i++) {
                Mp[i] = max(Mp[i], temp[i]);
            }
        }
        return Mp;
    }
    
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector <int> Mp = maxFreq(B);
        
        vector<string> res;
        for(auto& word: A) {
            int temp[26] = {0};
            for(auto& ch: word) temp[ch - 'a'] += 1;
            
            bool flag = true;
            for(int i = 0; i < 26; i++) {
                if(temp[i] < Mp[i]) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) res.push_back(word);
        }
        return res;
    }
};