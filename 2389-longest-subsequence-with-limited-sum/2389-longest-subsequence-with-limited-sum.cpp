class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> ret;
        for(auto &q: queries) {
            int sum = 0, count = 0;
            for(int i = 0; i < n; i++) {
                sum += nums[i];
                if(sum > q) break;
                count += 1;
            }
            ret.push_back(count);
        }
        return ret;
    }
};