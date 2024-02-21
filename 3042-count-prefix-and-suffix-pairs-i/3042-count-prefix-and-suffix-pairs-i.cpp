class Solution {
public:
    
    bool isPrefix(const std::string& str1, const std::string& str2) {
        if (str1.size() > str2.size()) return false;
        return str2.substr(0, str1.size()) == str1;
    }
    
    bool isSuffix(const std::string& str1, const std::string& str2) {
        if (str1.size() > str2.size()) return false;
        return str2.substr(str2.size() - str1.size()) == str1;
    }
    
    bool check(const std::string& str1, const std::string& str2) {
        return isPrefix(str1, str2) and isSuffix(str1, str2);
    }


    int countPrefixSuffixPairs(vector<string>& words) {
        int ret = 0, len = words.size();
        for(int i = 0; i < len; i++) {
            string str1 = words[i]; 
            for(int j = i+1; j < len; j++) {
                string str2 = words[j];
                ret += check(str1, str2);
            }
        }
        return ret;
    }
};