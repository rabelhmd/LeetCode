class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        map <int, int> Mp;
        for(int &x: nums) Mp[x] += 1;
        
        for(auto [key, _]: Mp) {
            while(Mp[key]) {
                for(int i = key; i < key + k; i++) {
                    Mp[i] -= 1;
                    if(Mp[i] < 0) return false;
                }
            }
        }
        
        return true;
    }
};