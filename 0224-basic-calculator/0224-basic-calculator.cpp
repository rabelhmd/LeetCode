class Solution {
public:
    int calculate(string s) {
        stack <pair <int,int> > St;
        int sum = 0;
        int sign = 1;
        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(isdigit(ch)) {
                int num = 0;
                while(i < s.size() && isdigit(s[i])) {
                    num = (num * 10) + (s[i] - '0');
                    i += 1;
                }
                i -= 1;
                sum += (num * sign);
                sign = 1;
            }
            else if(ch == '(') {
                St.push({sum, sign});
                sum = 0, sign = 1;
            }
            else if(ch == ')') {
                sum = St.top().first + (St.top().second * sum);
                St.pop();
            }
            else if(ch == '-') {
                sign *= (-1);
            }
        }
        return sum;
    }
};