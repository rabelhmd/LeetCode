class Solution {
public:
    long long cal(vector<vector<int>> &dp) {
        long long ret = 0;
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < 26; j++) {
                ret += (long long) dp[i][j] * (long long) dp[j][i];
            }
        }
        return ret;
    }
    
    long long distinctNames(vector<string>& ideas) {
        int n = ideas.size();
        
        unordered_set<string> St;
        for(auto &idea: ideas) {
            St.insert(idea);
        }
        
        vector<vector<int>> dp(26, vector<int> (26, 0));
        for(auto &idea: ideas) {
            char old_char = idea[0];
            for(char new_char = 'a'; new_char <= 'z'; new_char++) {
                idea[0] = new_char;
                if(St.count(idea) == 0) {
                    dp[old_char - 'a'][new_char - 'a']++;
                }
            }
        }
        return cal(dp);
    }
};