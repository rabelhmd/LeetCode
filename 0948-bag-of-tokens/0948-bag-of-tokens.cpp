class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        int res = 0;
        
        while(i <= j) {
            while(i <= j && tokens[i] <= power) {
                power -= tokens[i];
                i += 1;
                res += 1;
            }
            if(res <= 0 || i >= j) break;
            power += tokens[j];
            res -= 1;
            j -= 1;
        }
        return res;
    }
};