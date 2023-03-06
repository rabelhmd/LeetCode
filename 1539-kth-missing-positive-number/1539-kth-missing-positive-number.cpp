class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map <int, bool> Mp;
        for(auto &x: arr) Mp[x] = true;
        for(int i = 1; ; i++) {
            if(Mp.find(i) == Mp.end()) {
                k--;
                if(!k) return i;
            }
        }
        return -1;
    }
};