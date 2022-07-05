class Solution {
public:
    string largestGoodInteger(string num) {
        int len = num.size();
        char d = '$';
        for(int i = 0; i < len-2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                if(d == '$') {
                    d = num[i];
                    continue;
                }
                if(num[i] > d) {
                    d = num[i];
                }
            }
        }
        if(d == '$') return "";
        string ans = "";
        ans += d;
        ans += d;
        ans += d;
        return ans;
    }
};