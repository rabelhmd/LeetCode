class Solution {
public:
    
    void getString(vector <int> & nums, vector <string>& v) {
        for(auto n: nums) v.push_back(to_string(n));
        
        sort(v.begin(), v.end(), [](string &s1, string &s2) { 
            return s1 + s2 > s2 + s1; 
        });
    }
    
    string largestNumber(vector<int>& nums) {
        vector <string> v;
        getString(nums, v);
        
        string res, ans;
        for(auto x: v) res += x;
        
        int id = 0, len = res.size();
        while(id < res.size() && res[id] == '0') id += 1;
        
        for(; id < len; id++) ans += res[id];
        return ans.size() == 0 ? to_string(nums[0]) : ans;
    }
};