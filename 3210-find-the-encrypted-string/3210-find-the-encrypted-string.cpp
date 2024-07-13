class Solution {
public:
    string getEncryptedString(string s, int k) {
        int len = s.size();
        string ret;
        for(int i = 0; i < len; i++) ret += s[(i + k) % len];
        return ret;
    }
};