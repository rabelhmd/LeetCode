class Solution {
public:
    string countAndSay(int n) {
        if(n == 0) return "";
        string res = "1";
        n -= 1;
        while(n-- > 0) {
            string cur = "";
            int len = res.size();
            for(int i = 0; i < len; i++) {
                int count = 1;
                while(i < len-1 && res[i] == res[i+1]) {
                    i += 1;
                    count += 1;
                }
                cur += to_string(count) + res[i];
            }
            res = cur;
        }
        return res;
    }
};