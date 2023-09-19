class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int, bool> Mp;
        for(auto &x: nums) {
            if(Mp.find(x) != Mp.end()) return x;
            Mp[x] = true;
        }
        return -1;
    }
};