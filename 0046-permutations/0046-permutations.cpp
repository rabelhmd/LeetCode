class Solution {
public:
    vector<vector<int>> v;
    int count = 0;
    
    void track(vector <int> &nums, vector <int> &ans) {
        if(nums.size() == count) {
            v.push_back(ans);
            return;
        }
        
        for(int i = 0; i < nums.size(); i++) {
            int cur = nums[i];
            nums[i] = -100;
            if(cur != -100) {
                ans[count] = cur;
                count += 1;
                track(nums, ans);
                count -= 1;
            }
            nums[i] = cur;
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector <int> ans;
        ans.resize(nums.size());
        track(nums, ans);
        return v;
    }
};