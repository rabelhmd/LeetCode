class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v: matrix) {
            if(binary_search(v.begin(), v.end(), target)) return true;
        }
        return false;
    }
};