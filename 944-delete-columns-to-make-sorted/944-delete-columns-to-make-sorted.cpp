class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int len = strs.size(), count = 0;
        
        for(int i = 0; i < strs[0].size(); i++) {
            string a, b;
            for(int j = 0; j < len; j++) {
                a += strs[j][i];
            }
            b = a;
            sort(a.begin(), a.end());
            count += (a != b);
        }
        
        return count;
    }
};