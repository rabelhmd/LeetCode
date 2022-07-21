class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector <int> v = nums;
        for(int i = 0; i < len; i++) {
            nums[(i + k)%len] = v[i];
        }
    }
};