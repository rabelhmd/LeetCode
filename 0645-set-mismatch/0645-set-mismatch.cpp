class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto &x: nums) {
            Mp[x] += 1;
        }
        
        int d = -1, id = -1;
        for(int i = 1; i <= nums.size(); i++) {
            if(Mp[i] == 2) d = i;
            if(Mp[i] == 0) id = i;
            if(d != -1 && id != -1) return {d, id};
        }
        return {0, 0};
    }
};