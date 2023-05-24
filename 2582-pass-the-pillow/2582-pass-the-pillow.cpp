class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        bool flag = true;
        while(time--> 0) {
            pos = (flag) ? pos + 1 : pos - 1;
            if(pos == 1 or pos == n) flag = !flag;
        }
        return pos;
    }
};