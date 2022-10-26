class Solution {
public:
    int longestPalindrome(string s) {
        int cur = 0, len = s.size();
        unordered_map <int, int> Mp;
        for(auto &x: s) {
            Mp[x] += 1;
            if(Mp[x] % 2 == 0) {
                cur += 2;
            }
        }
        return (cur == len) ? cur : cur + 1;
    }
};