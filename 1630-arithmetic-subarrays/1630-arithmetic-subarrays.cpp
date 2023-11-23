class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ret;
        
        for (auto i = 0, j = 0; i < l.size(); ++i) {
            vector<int> cur(begin(nums) + l[i], begin(nums) + r[i] + 1);
            sort(begin(cur), end(cur));
            for (j = 2; j < cur.size(); ++j) {
                if (cur[j] - cur[j - 1] != cur[1] - cur[0])
                    break;
            }
            ret.push_back(j == cur.size());
        }
        return ret;
    }
};