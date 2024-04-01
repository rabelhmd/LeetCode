class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int d = x, sum = 0;
        while(d) {
            sum += (d%10);
            d /= 10;
        }
        return (x % sum == 0) ? sum : -1;
    }
};