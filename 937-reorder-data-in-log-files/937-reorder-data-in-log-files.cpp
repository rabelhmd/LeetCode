class Solution {
public:
    
    static bool cmp(string& str1, string& str2) {
        auto sub1 = string(str1.begin() + str1.find(' '), str1.end());
        auto sub2 = string(str2.begin() + str2.find(' '), str2.end());
        if(sub1 == sub2) return str1 < str2;
        return sub1 < sub2;
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        auto it = stable_partition(logs.begin(), logs.end(), [] (const string& str) {
            int pos = str.find(' ') + 1;
            return isalpha(str[pos]);
        });
        
        sort(logs.begin(), it, cmp);
        return logs;
    }
};