class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map <int, int> Mp, subs;
        for(int &x: nums) Mp[ x ] += 1;
        
        for(int &x: nums) {
            if( !Mp[ x ] ) continue;
            Mp[ x ] -= 1;
            
            if(subs[x - 1]) {
                subs[x - 1] -= 1;
                subs[x] += 1;
                continue;
            }
            
            if(Mp[x + 1] && Mp[x + 2]) {
                subs[x + 2] += 1;
                Mp[x + 1] -= 1;
                Mp[x + 2] -= 1;
                continue;
            }
            return false;
         }
        
        return true;
    }
};