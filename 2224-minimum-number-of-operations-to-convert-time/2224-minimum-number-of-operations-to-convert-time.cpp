class Solution {
public:
    int op[4] = {60, 15, 5, 1};
    
    int minutes(string str) {
        int HH = stoi(str.substr(0, 2)) * 60;
        int MM = stoi(str.substr(3, 2));
        return HH + MM;
    }
    
    int convertTime(string current, string correct) {
        int step = 0;
        int diff = minutes(correct) - minutes(current);
        for(int &x: op) {
            if(diff == 0) return step;
            step += (diff / x);
            diff %= x;
        }
        return step;
    }
};