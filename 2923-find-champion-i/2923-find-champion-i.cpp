class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int len = grid.size();
        for(int i = 0; i < len; i++) {
            int sum = 0;
            for(auto &x: grid[i]) sum += x;
            if(sum == len-1) return i;
        }
        return -1;
    }
};