class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int len = strs.size(), count = 0;
        
        bool flag = false;
        
        for(int i = 0; i < strs[0].size(); i++) {
            flag = false;
            for(int j = 1; j < len; j++) {
                if(strs[j][i] < strs[j-1][i]) {
                    flag = true;
                    break;
                }
            }
            count += (flag);
        }
        
        return count;
    }
};