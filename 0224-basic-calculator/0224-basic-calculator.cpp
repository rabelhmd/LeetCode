class Solution {
public:
    int calculate(string s) {
        stack <pair <int,int> > St;
        int sum = 0, sign = 1, len = s.size();
        for(int i = 0; i < len; i++) {
            char ch = s[i];
            if(isdigit(ch)) {
                int num = 0;
                while(i < len && isdigit(s[i])) {
                    num = (num * 10) + (s[i] - '0');
                    i += 1;
                }
                i -= 1;
                sum += (num * sign);
                sign = 1;
            } else if(ch == '(') {
                St.push({sum, sign});
                sign = 1, sum = 0;
            } else if(ch == ')') {
                sum = St.top().first + (sum * St.top().second);
                St.pop();
            } else if(ch == '-') {
                sign *= (-1);
            }
        }
        return sum;
    }
};