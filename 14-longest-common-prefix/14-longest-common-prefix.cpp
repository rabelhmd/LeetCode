class Solution {
public:
    //Input: strs = ["flower","flow","flight"]
    //Output: "fl"
    string longestCommonPrefix(vector<string>& strs) {
        int overallSize = strs.size();
        if (overallSize == 0) return "";
        int first = 0, firstSize = strs[first].size();
        for(int i = 0; i < firstSize; i++) {
            char ch = strs[first][i];            
            for(int j = 1; j < overallSize; j++) {
                string cur = strs[j];
                int Len = cur.size();
                if(i == Len || cur[i] != ch)
                    return strs[first].substr(0, i);
            }
        }
        return strs[first];
    }
};