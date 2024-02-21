class Solution {
public:
    bool isPS(const std::string& str1, const std::string& str2) {
        if(str1 == str2) return true;
        int len1 = str1.length(), len2 = str2.length();
        if (len1 >= len2) return false;
        return str1 == str2.substr(0, len1) and str1 == str2.substr(len2 - len1);
    }


    int countPrefixSuffixPairs(vector<string>& words) {
        int ret = 0, len = words.size();
        for(int i = 0; i < len; i++) {
            string str1 = words[i]; 
            for(int j = i+1; j < len; j++) {
                string str2 = words[j];
                ret += isPS(str1, str2);
            }
        }
        return ret;
    }
};