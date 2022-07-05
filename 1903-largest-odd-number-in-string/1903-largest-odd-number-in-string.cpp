class Solution {
public:
    string largestOddNumber(string num) {
        bool flag = false;
        for(auto c: num) {
            if((c - '0') & 1) {
                flag = true; break;
            }
        }
        if(!flag) return "";
        while(num.size()) {
            int cur = num[num.size()-1] - '0';
            if(cur & 1) return num;
            num.pop_back();
        }
        return num;
    }
};