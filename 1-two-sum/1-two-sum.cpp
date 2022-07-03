class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        
        map <int, int> Mp;
        
        for(int i = 0; i < nums.size(); i += 1) {
            
            int a = target - nums[i];
            
            if(Mp.find(a) != Mp.end()) {
                
                v.push_back(Mp[a]);
                v.push_back(i);
                
                return v;
            }
            
            
            Mp[nums[i]] = i;
            
        }
        
        return v;
        
    }
};