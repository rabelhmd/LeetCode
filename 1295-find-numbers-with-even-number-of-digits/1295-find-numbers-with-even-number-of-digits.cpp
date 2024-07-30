class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret = 0;
        for(auto &x: nums) if(to_string(x).length()%2==0) ret++;
        return ret;
    }
};