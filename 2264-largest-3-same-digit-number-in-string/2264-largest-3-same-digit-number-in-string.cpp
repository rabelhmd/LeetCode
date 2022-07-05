class Solution {
public:
    string largestGoodInteger(string num) {
        int len = num.size();
        string ans = "";
        for(int i = 0; i < len-2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                if(ans == "") {
                    ans += num[i];
                    ans += num[i+1];
                    ans += num[i+2];
                }
                if(num[i] > ans[0]) {
                    ans = "";
                    ans += num[i];
                    ans += num[i+1];
                    ans += num[i+2];
                }
                //ans = max(ans, (num[i] + num[i+1] + num[i+2]));
            }
        }
        return ans;
    }
};