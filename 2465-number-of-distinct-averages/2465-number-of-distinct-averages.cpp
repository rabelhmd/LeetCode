class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set <float> St;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1;
        while(i < j) {
            St.insert((float) (nums[i++] + nums[j--]) / 2);
        }
        return St.size();
    }
};